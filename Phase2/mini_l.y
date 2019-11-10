%{
 #include <stdio.h>
 #include <stdlib.h>

 void yyerror(const char *msg);
 
 extern int numLines;
 extern int idenIndex;

 FILE * yyin;
%}

%union{
  double dval;
  int ival;
  char* sval;
}

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
program:							{ printf("program -> epsilon\n"); }
				| function program	{ printf("prog_start -> function\n"); }
				;

function:		FUNC ident SEMICOLON params local body
									{ printf("function -> FUNC IDENT SEMICOLON params local body\n"); }
				| 
				;

params:			BEG_PARAMS declarations END_PARAMS
									{ printf("params -> BEG_PARAMS declarations END_PARAMS\n"); }
				| 
				;

local:			BEG_LOC declarations END_LOC
									{ printf("local -> BEG_LOC declarations END_LOC\n"); }
				| 
				;

body:			BEG_BOD s_statement END_BOD
									{ printf("body -> BEG_BOD s_statment END_BOD\n"); }
				|
				;

declarations:						{ printf("declarations -> epsilon\n"); }
				|	declaration SEMICOLON declarations
									{ printf("declarations -> declaration SEMICOLON declarations\n"); }

declaration: 	d_ident COLON array INT
									{ printf("declaration -> d_ident COLON array INT\n"); }
				| declaration d_ident
				;

ident:			IDENT 				{ printf("ident -> IDENT %s\n", $1); }
				|
				;

d_ident:		ident
				|	ident COMMA d_ident
									{ printf("d_ident -> ident COMMA d_ident\n"); }
				|
				;

array:								{ printf("array -> epsilon\n"); }
				|	ARR BEG_ARR NUMBER END_ARR OF
									{ printf("array -> ARR BEG_ARR NUMBER END_ARR OF\n"); }
				;

s_statement:							{ printf("s_statment -> epsilon\n"); }
				|	p_statement		{ printf("s_statement -> p_statament\n"); }

p_statement:		statement SEMICOLON	{ printf("p_statement -> statement SEMICOLON\n"); }
				|	statement SEMICOLON p_statement
									{ printf("p_statement -> statement SEMICOLON p_statement"); }

statement:		assign_stmt		{ printf("statement -> var ASSIGN exp\n"); }
				|	if_stmt			{ printf("statement -> if_stmt\n"); }
				|	while_stmt		{ printf("statement -> while_stmt\n"); }
				|	do_while_stmt	{ printf("statement -> do_while_stmt\n"); }
				|	read_stmt		{ printf("statement -> read_stmt\n"); }
				|	write_stmt		{ printf("statement -> write_stmt\n"); }
				|	cont_stmt		{ printf("statment -> cont_stmt\n"); }
				|	return_stmt		{ printf("statement -> return_stmt\n"); }
				;

assign_stmt:	var ASSIGN exp 		{ printf("assign_stmt -> var ASSIGN exp\n"); }
				|
				;					

if_stmt:		IF bool_exp THEN p_statement SEMICOLON else_stmt END_IF
									{ printf("if_stmt -> IF bool_exp THEN statment SEMICOLON else_stmt END_IF\n"); }
				|
				;

else_stmt:							{ printf("else_stmt -> epsilon\n"); }
				| ELSE p_statement SEMICOLON
									{ printf("else_stmt -> ELSE p_statement SEMICOLON\n"); }
				|
				;

while_stmt:		WHILE bool_exp BEG_LOOP p_statement SEMICOLON END_LOOP
									{ printf("while_stmt -> WHILE bool_exp BEG_LOOP p_statment SEMICOLON END_LOOP\n"); }
				|
				;

do_while_stmt:	DO BEG_LOOP p_statement SEMICOLON END_LOOP WHILE bool_exp
									{ printf("do_while_stmt -> DO BEG_LOOP p_statement SEMICOLON END_LOOP WHILE bool_exp\n"); }
				|
				;

read_stmt:		READ c_var			{ printf("read_stmt -> READ c_var\n"); }
				|
				;

write_stmt:		WRITE c_var			{ printf("write_stmt -> WRITE c_var\n"); }
				|
				;

cont_stmt:		CONT 				{ printf("cont_stmt -> CONT\n"); }
				|
				;

return_stmt:	RETURN exp				{ printf("return_stmt -> RETURN exp\n"); }
				|
				;

bool_exp:		r_and_exp 			{ printf("bool_exp -> r_and_exp\n"); }
				|	r_and_exp OR bool_exp	{ printf("bool_exp -> r_and_exp OR r_and_exp\n"); }				
				|
				;

r_and_exp:		r_exp 				{ printf("r_and_exp -> r_exp\n"); }
				|	r_exp AND r_and_exp 	{ printf("r_and_exp -> r_exp AND r_exp\n"); }
				|
				;

r_exp: 			all_b_exp			{ printf("r_exp -> all_b_exp\n"); }
				|	NOT all_b_exp	{ printf("r_exp -> NOT all_b_exp\n"); }
				|
				;

all_b_exp:		exp comp exp 		{ printf("all_b_exp -> exp comp exp\n"); }
				|	TRUE			{ printf("all_b_exp -> TRUE\n"); }
				|	FALSE			{ printf("all_b_exp -> FALSE\n"); }
				|	L_PAREN bool_exp R_PAREN	{ printf("all_b_exp -> L_PAREN bool_exp R_PAREN\n"); }
				|
				;

comp:			EQ				{ printf("comp -> EQ\n"); }
				|	NEQ			{ printf("comp -> NEQ\n"); }
				|	LT 			{ printf("comp -> LT\n"); }
				|	GT 			{ printf("comp -> GT\n"); }
				|	LTE 		{ printf("comp -> LTE\n"); }
				|	GTE 		{ printf("comp -> GTE\n") ;}
				|
				;

exp:			m_exp			{ printf("exp -> m_exp\n"); }
				|	m_exp PLUS exp	{ printf("exp -> m_exp PLUS exp\n"); }
				|	m_exp MINUS exp { printf("exp -> m_exp MINUS exp\n"); }
				|
				;

m_exp:			term			{ printf("m_exp -> term\n"); }
				|	term MULT m_exp { printf("m_exp -> term MULT m_exp\n"); }
				|	term DIV m_exp { printf("m_exp -> term DIV m_exp\n"); }
				|	term MOD m_exp { printf("m_exp -> term MOD m_exp\n"); }
				|
				;

c_exp:			exp 			{ printf("c_exp -> exp\n"); }
				|	exp COMMA c_exp	{ printf("c_exp -> exp COMMA c_exp\n"); }

term:			um_term			{ printf("term -> um_term\n"); }
				|	ident L_PAREN R_PAREN	{ printf("term -> ident L_PAREN R_PAREN\n"); }
				|	ident L_PAREN c_exp	R_PAREN	{ printf("term -> ident L_PAREN c_exp R_PAREN\n"); }
				|
				;

um_term:			MINUS t_term %prec UMINUS
								{ printf("um_term -> MINUS t_term\n"); }
				|	t_term		{ printf("um_term -> t_term\n"); }
				|
				;

t_term:			var				{ printf("t_term -> var\n"); }
				|	NUMBER		{ printf("t_term -> NUMBER\n"); }
				|	L_PAREN exp R_PAREN	{ printf("t_term -> L_PAREN exp R_PAREN\n"); }
				|
				;

var:				ident 			{ printf("var -> ident\n"); }
				|	ident BEG_ARR exp END_ARR
								{ printf("var -> ident BEG_ARR exp END_ARR\n"); }
				|
				;

c_var:			var 			{ printf("c_var -> var\n"); }
				|	var COMMA c_var	{ printf("c_var -> var COMMA c_var\n"); }

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
