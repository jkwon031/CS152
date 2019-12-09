%{ 

#include <stdio.h>
#include <stdlib.h>
#include "gen.hpp"

 void yyerror(const char *msg);
 
 extern int numLines;
 extern int idenIndex;
 extern ASTNode* root;

 FILE * yyin;
%}

%union{
  double dval;
  int ival;
  char* sval;
  Function* func;
  FunctionList*	func_list;
  Statement* stat;
  StatementList* stat_list;
  Expr* expr;
}

%type<func_list> program function_list
%type<stat_list> statement_list
%type<expr> exp
%type<stat> statement

%error-verbose
%start program
%token FUNC BEG_PARAMS END_PARAMS BEG_LOC END_LOC BEG_BOD END_BOD INT ARR OF IF THEN END_IF ELSE WHILE DO BEG_LOOP END_LOOP CONT READ WRITE AND OR NOT TRUE FALSE RETURN
%token MINUS PLUS MULT DIV MOD
%token EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN BEG_ARR END_ARR ASSIGN
%token <ival> NUMBER
%token <sval> IDENT
%left PLUS MINUS
%left MULT DIV MOD
%nonassoc UMINUS


%% 
program:			functions		{ $$ = $1; root = $$; }
				;

function_list:		function 			{ $$ = new FunctionsList(); $$->append($1); }
				|	function function_list	{ $$ = $2; $2->front($1); }
				;

function:		FUNC IDENT SEMICOLON BEG_PARAMS declarations END_PARAMS BEG_LOC declarations END_LOC BEG_BOD p_statement END_BOD
							{ $$ = new DefineFunction($2, $5, $8, $11); }
				;

declarations:						{/* printf("declarations -> epsilon\n");*/ }
				|	declaration SEMICOLON declarations
							{ $$ = new DeclarationsList(); $$->append(/*printf("declarations -> declaration SEMICOLON declarations\n");*/ }
				;

declaration: 	IDENT COMMA declaration
									{}
				|	IDENT COLON INT
									{}
				|	IDENT COLON ARR BEG_ARR NUMBER END_ARR OF INT
									{/* printf("declaration -> d_ident COLON array INT\n"); */}
				;

p_statement:		statement SEMICOLON	{/* printf("p_statement -> statement SEMICOLON\n");*/ }
				|	statement SEMICOLON p_statement
									{/* printf("p_statement -> statement SEMICOLON p_statement\n");*/ }
				;

statement:		assign_stmt		{/* printf("statement -> var ASSIGN exp\n"); */}
				|	if_stmt			{ $$ = $1; }
				|	while_stmt		{ $$ = $1; }
				|	do_while_stmt	{ $$ = $1; }
				|	read_stmt		{ $$ = $1; }
				|	write_stmt		{ $$ = $1; }
				|	cont_stmt		{ $$ = $1; }
				|	return_stmt		{ $$ = $1; }
				;

assign_stmt:	var ASSIGN exp 		{/* printf("assign_stmt -> var ASSIGN exp\n");*/ }
				;					

if_stmt:		IF bool_exp THEN p_statement END_IF 
									{ $$ = new IfStatement($2, $4); }
				|	IF bool_exp THEN p_statement ELSE p_statement END_IF
									{ $$ = new IfElseStatement($2, $4, $6); }
				;

while_stmt:		WHILE bool_exp BEG_LOOP p_statement END_LOOP
									{ $$ = new WhileStatement($2, $4); }
				;

do_while_stmt:	DO BEG_LOOP p_statement END_LOOP WHILE bool_exp
									{ $$ = new DoWhileStatement($3, $6); }
				;

read_stmt:		READ c_var			{ $$ = new ReadStatement($2); }
				;

write_stmt:		WRITE c_var			{ $$ = new WriteStatment($2); }
				;

cont_stmt:		CONT 				{/* printf("cont_stmt -> CONT\n");*/ }
				;

return_stmt:	RETURN exp				{/* printf("return_stmt -> RETURN exp\n");*/ }
				;

bool_exp:		r_and_exp 			{/* printf("bool_exp -> r_and_exp\n");*/ }
				|	r_and_exp OR bool_exp	{/* printf("bool_exp -> r_and_exp OR r_and_exp\n");*/ }				
				;

r_and_exp:		r_exp 				{/* printf("r_and_exp -> r_exp\n");*/ }
				|	r_exp AND r_and_exp 	{/* printf("r_and_exp -> r_exp AND r_exp\n");*/ }
				;

r_exp: 			all_b_exp			{/* printf("r_exp -> all_b_exp\n");*/ }
				|	NOT all_b_exp	{ /*printf("r_exp -> NOT all_b_exp\n");*/ }
				;

all_b_exp:		exp comp exp 		{ /*printf("all_b_exp -> exp comp exp\n");*/ }
				|	TRUE			{/* printf("all_b_exp -> TRUE\n");*/ }
				|	FALSE			{/* printf("all_b_exp -> FALSE\n");*/ }
				|	L_PAREN bool_exp R_PAREN	{/* printf("all_b_exp -> L_PAREN bool_exp R_PAREN\n");*/ }
				;

comp:			EQ				{/* printf("comp -> EQ\n");*/ }
				|	NEQ			{/* printf("comp -> NEQ\n");*/ }
				|	LT 			{/* printf("comp -> LT\n");*/ }
				|	GT 			{ /*printf("comp -> GT\n");*/ }
				|	LTE 		{/* printf("comp -> LTE\n");*/ }
				|	GTE 		{ /*printf("comp -> GTE\n") ;*/}
				;

exp:			m_exp			{ /*printf("exp -> m_exp\n");*/ }
				|	m_exp PLUS exp	{ $$ = new Expr($1, "+", $3); }
				|	m_exp MINUS exp { $$ = new Expr($1, "-", $3); }
				;

m_exp:			term			{/* printf("m_exp -> term\n");*/ }
				|	term MULT m_exp { $$ = new Expr($1, "*", $3); }
				|	term DIV m_exp { $$ = new Expr($1, "/", $3); }
				|	term MOD m_exp { $$ = new Expr($1, "%", $3); }
				;

c_exp:			exp 			{/* printf("c_exp -> exp\n");*/ }
				|	exp COMMA c_exp	{/* printf("c_exp -> exp COMMA c_exp\n");*/ }
				;

term:			um_term			{/* printf("term -> um_term\n");*/ }
				|	IDENT L_PAREN R_PAREN	{/* printf("term -> ident L_PAREN R_PAREN\n");*/ }
				|	IDENT L_PAREN c_exp	R_PAREN	{/* printf("term -> ident L_PAREN c_exp R_PAREN\n");*/ }
				;

um_term:			MINUS t_term %prec UMINUS
								{/* printf("um_term -> MINUS t_term\n");*/ }
				|	t_term		{/* printf("um_term -> t_term\n"); */}
				;

t_term:			var				{/* printf("t_term -> var\n");*/ }
				|	NUMBER		{/* printf("t_term -> NUMBER\n");*/ }
				|	L_PAREN exp R_PAREN	{/* printf("t_term -> L_PAREN exp R_PAREN\n");*/ }
				;

var:				IDENT 			{ /*printf("var -> ident\n");*/ }
				|	IDENT BEG_ARR exp END_ARR
								{ /*printf("var -> ident BEG_ARR exp END_ARR\n");*/ }
				;

c_var:			var 			{/* printf("c_var -> var\n");*/ }
				|	var COMMA c_var	{/* printf("c_var -> var COMMA c_var\n");*/ }

%%

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", numLines, idenIndex, msg);
}
