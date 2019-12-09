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

declarations:		declaration SEMICOLON
							{ $$ = new DeclarationsList(); $$->append($1); }
				|	declaration SEMICOLON declarations
							{ $$ = $3; $3->front($1); }
				;

declaration: 	IDENT COMMA declaration
									{$$ = new Declaration($1, $3); }
				|	IDENT COLON INT
									{$$ = new Declaration($1); }
				|	IDENT COLON ARR BEG_ARR NUMBER END_ARR OF INT
									{$$ = new Declaration($1, $5); }
				;

p_statement:		statement SEMICOLON	{$$ = new StatementList(); $$->append($1); }
				|	statement SEMICOLON p_statement
									{$$ = $3; $3->front($1); }
				;

statement:		assign_stmt		{ $$ = $1; }
				|	if_stmt			{ $$ = $1; }
				|	while_stmt		{ $$ = $1; }
				|	do_while_stmt	{ $$ = $1; }
				|	read_stmt		{ $$ = $1; }
				|	write_stmt		{ $$ = $1; }
				|	cont_stmt		{ $$ = $1; }
				|	return_stmt		{ $$ = $1; }
				;

assign_stmt:	var ASSIGN exp 		{ $$ = new AssignStatement($1, $3); }
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

bool_exp:		r_and_exp 			{ $$ = $1; }
				|	r_and_exp OR bool_exp	{ $$ = new Expr($1, "||", $3); }				
				;

r_and_exp:		r_exp 				{ $$ = $1; }
				|	r_exp AND r_and_exp 	{ $$ = new Expr($1, "&&", $3); }
				;

r_exp: 			all_b_exp			{ $$ = $1; }
				|	NOT all_b_exp	{ /*printf("r_exp -> NOT all_b_exp\n");*/ }
				;

all_b_exp:		exp comp exp 		{ $$ = new Comparison($1, $2, $3); }
				|	TRUE			{ $$ = "true"; }
				|	FALSE			{ $$ = "false"; }
				|	L_PAREN bool_exp R_PAREN	{/* printf("all_b_exp -> L_PAREN bool_exp R_PAREN\n");*/ }
				;

comp:			EQ				{ $$ = "="; }
				|	NEQ			{ $$ = "!="; }
				|	LT 			{ $$ = "<"; }
				|	GT 			{ $$ = ">"; }
				|	LTE 		{ $$ = "<="; }
				|	GTE 		{ $$ = ">="; }
				;

exp:			m_exp			{ $$ = $1; }
				|	m_exp PLUS exp	{ $$ = new Expr($1, "+", $3); }
				|	m_exp MINUS exp { $$ = new Expr($1, "-", $3); }
				;

m_exp:			term			{ $$ = $1; }
				|	term MULT m_exp { $$ = new Expr($1, "*", $3); }
				|	term DIV m_exp { $$ = new Expr($1, "/", $3); }
				|	term MOD m_exp { $$ = new Expr($1, "%", $3); }
				;

c_exp:			exp 			{ $$ = $1; }
				|	exp COMMA c_exp	{ $$ = new Expr($1, ",", $3); }
				;

term:			um_term			{ $$ = $1; }
				|	IDENT L_PAREN R_PAREN	{ $$ = Function($1, NULL); }
				|	IDENT L_PAREN c_exp	R_PAREN	{ $$ = Function($1, $3); }
				;

um_term:			MINUS t_term %prec UMINUS
								{ }
				|	t_term		{ $$ = $1; }
				;

t_term:			var				{ $$ = $1; }
				|	NUMBER		{ $$ = ExprNumber($1); }
				|	L_PAREN exp R_PAREN	{/* printf("t_term -> L_PAREN exp R_PAREN\n");*/ }
				;

var:				IDENT 			{ /*printf("var -> ident\n");*/ }
				|	IDENT BEG_ARR exp END_ARR
								{ /*printf("var -> ident BEG_ARR exp END_ARR\n");*/ }
				;

c_var:			var 			{ $$ = $1; }
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
