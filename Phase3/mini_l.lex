/*
	Junyoung Kwon
	861274236
	
	Phase 3
*/

%{
	#include "y.tab.h"
	int numLines = 1, idenIndex = 1;

%}

LETTER [a-zA-Z]
NUMBER [0-9] 
IDENTIFIER {LETTER}|({LETTER}({LETTER}|{NUMBER}|_)*({LETTER}|{NUMBER}))
NOIDENTBEF ({NUMBER}|_){IDENTIFIER}
NOIDENTAFT {IDENTIFIER}_

%%

 /*Reserved Word*/

"function"	{ idenIndex += yyleng; return FUNC;}
"beginparams"	{ idenIndex += yyleng; return BEG_PARAMS;}
"endparams"	{ idenIndex += yyleng; return END_PARAMS;}
"beginlocals"	{ idenIndex += yyleng; return BEG_LOC;}
"endlocals"	{ idenIndex += yyleng; return END_LOC;}
"beginbody"	{ idenIndex += yyleng; return BEG_BOD;}
"endbody"	{ idenIndex += yyleng; return END_BOD;}
"integer"	{ idenIndex += yyleng; return INT;}
"array"		{ idenIndex += yyleng; return ARR;}
"of"		{ idenIndex += yyleng; return OF;}
"if"		{ idenIndex += yyleng; return IF;}
"then"		{ idenIndex += yyleng; return THEN;}
"endif"		{ idenIndex += yyleng; return END_IF;}
"else"		{ idenIndex += yyleng; return ELSE;}
"while"		{ idenIndex += yyleng; return WHILE;}
"do"		{ idenIndex += yyleng; return DO;}
"beginloop"	{ idenIndex += yyleng; return BEG_LOOP;}
"endloop"	{ idenIndex += yyleng; return END_LOOP;}
"continue"	{ idenIndex += yyleng; return CONT;}
"read"		{ idenIndex += yyleng; return READ;}
"write"		{ idenIndex += yyleng; return WRITE;}
"and"		{ idenIndex += yyleng; return AND;}
"or"		{ idenIndex += yyleng; return OR;}
"not"		{ idenIndex += yyleng; return NOT;}
"true"		{ idenIndex += yyleng; return TRUE;}
"false"		{ idenIndex += yyleng; return FALSE;}
"return"	{ idenIndex += yyleng; return RETURN;}

 /*Arithmetic Operators*/

"-"		{ idenIndex += yyleng; return MINUS;}
"+"		{ idenIndex += yyleng; return PLUS;}
"*"		{ idenIndex += yyleng; return MULT;}
"/"		{ idenIndex += yyleng; return DIV;}
"%"		{ idenIndex += yyleng; return MOD;}

 /*Comparison Operators*/

"=="		{ idenIndex += yyleng; return EQ;}
"<>"		{ idenIndex += yyleng; return NEQ;}
"<"		{ idenIndex += yyleng; return LT;}
">"		{ idenIndex += yyleng; return GT;}
"<="		{ idenIndex += yyleng; return LTE;}
">="		{ idenIndex += yyleng; return GTE;}

 /*Identifiers and Numbers*/

{IDENTIFIER}	{ idenIndex += yyleng; yylval.sval = yytext; return IDENT; }
{NUMBER}*	{ idenIndex += yyleng; yylval.ival = atoi(yytext); return NUMBER;}

 /*Other Special Symbols*/

";"		{ idenIndex += yyleng; return SEMICOLON;}
":"		{ idenIndex += yyleng; return COLON;}
","		{ idenIndex += yyleng; return COMMA;}
"("		{ idenIndex += yyleng; return L_PAREN;}
")"		{ idenIndex += yyleng; return R_PAREN;}
"["		{ idenIndex += yyleng; return BEG_ARR;}
"]"		{ idenIndex += yyleng; return END_ARR;}
":="		{ idenIndex += yyleng; return ASSIGN;}
"\n"		{++numLines; idenIndex = 1;}
[\t]+		{idenIndex += yyleng;}
[ ]		{idenIndex += yyleng;}
"##".*		{++numLines; idenIndex = 1;}

 /*Errror*/
{NOIDENTBEF}	{idenIndex += yyleng; printf("Error at line %d and column %d: identifier \"%s\" must begin with a letter\n", numLines, idenIndex - 1, yytext); exit(0);}
{NOIDENTAFT}	{idenIndex += yyleng; printf("Error at line %d and column %d: identifier \"%s\" cannot end with an underscore\n", numLines, idenIndex - 1, yytext); exit(0);}
.				{ printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", numLines, idenIndex, yytext); ++numLines; idenIndex += yyleng; exit(0);}
%%
