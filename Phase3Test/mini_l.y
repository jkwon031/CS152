%{

#include <iostream>
#include <cstdlib>
#include "gen.hpp"

extern int yylex();
extern ASTNode* root;
void yyerror(const char* s);
%}

%union {
  int int_val;
    char* str_val;
    Statement* stat;
    StatementList* stat_list;
    Expr* expr;
}

%type<stat_list> block statement_list
%type<expr> exp
%type<stat> statement

%token<int_val> NUMBER
%token<str_val> IDENT
%token IF ELSE END_IF
%token LTE GTE EQ NEQ OR AND L_PAREN R_PAREN LT GT 
%token PLUS MINUS MULT DIV BEG_LOOP END_LOOP DO WHILE THEN
%right '='
%left T_OR
%left T_AND
%left LTE GTE EQ NE LT GT
%left PLUS MINUS
%left MULT DIV 
%nonassoc UMINUS 

%start block
%define parse.error verbose

%%

block: 
      statement_list { $$ = $1; root = $$; }
    ;

statement_list:
      statement { $$ = new StatementList(); $$->append($1); }
    | statement_list statement { $$ = $1; $1->append($2); }
    ;

statement: 
      IF exp THEN block END_IF 
                  { $$ = new IfStatement($2, $4); }
    | IF exp THEN block ELSE block END_IF
                  { $$ = new IfElseStatement($2, $4, $6); }
    | WHILE exp BEG_LOOP block END_LOOP
                  { $$ = new WhileStatement($2, $4); }
    | DO BEG_LOOP block END_LOOP WHILE exp
                  { $$ = new DoWhileStatement($3, $6); }
    ;

exp: 
      exp '=' exp  { $$ = new Expr($1, "=", $3); }
    | exp PLUS exp  { $$ = new Expr($1, "+", $3);}
    | exp MINUS exp  { $$ = new Expr($1, "-", $3);}
    | exp MULT exp  { $$ = new Expr($1, "*", $3);}
    | exp DIV exp  { $$ = new Expr($1, "/", $3);}
    | exp LT exp  { $$ = new Expr($1, "<", $3);}
    | exp GT exp  { $$ = new Expr($1, ">", $3);}
    | exp LTE exp  { $$ = new Expr($1, "<=", $3); }
    | exp GTE exp  { $$ = new Expr($1, ">=", $3); }
    | exp NEQ exp  { $$ = new Expr($1, "!=", $3); }
    | exp EQ exp  { $$ = new Expr($1, "==", $3); }
    | MINUS exp %prec UMINUS  { $$ = new Expr(new ExprNumber(0), "-", $2); }
    | IDENT { $$ = new ExprID($1); free($1); }
    | NUMBER { $$ = new ExprNumber($1); }
    | L_PAREN exp R_PAREN { $$ = $2; }
    ;

%%

ASTNode* root;
int Generator::counter_label = 0;
int Generator::counter_var = 0;

int main() {
  yyparse();
    std::string mil = root->gencode();
    std::cout << mil;
  return 0;
}

void yyerror(const char* s) {
  fprintf(stderr, "Parser error: %s\n", s);
  exit(1);
}
