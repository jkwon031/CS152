/*
	Junyoung Kwon
	861274236
	
	Phase 2
*/

LETTER [a-zA-Z]
NUMBER [0-9] 
IDENTIFIER {LETTER}|({LETTER}({LETTER}|{NUMBER}|_)*({LETTER}|{NUMBER}))
NOIDENTBEF ({NUMBER}|_){IDENTIFIER}
NOIDENTAFT {IDENTIFIER}_
FILE [{LETTER}{NUMBER}]*\.min

	int numLines = 1, idenIndex = 1;
%%

 /*Reserved Word*/

"function"	{printf("FUNCTION\n"); idenIndex += yyleng;}
"beginparams"	{printf("BEGIN_PARAMS\n"); idenIndex += yyleng;}
"endparams"	{printf("END_PARAMS\n"); idenIndex += yyleng;}
"beginlocals"	{printf("BEGIN_LOCALS\n"); idenIndex += yyleng;}
"endlocals"	{printf("END_LOCALS\n"); idenIndex += yyleng;}
"beginbody"	{printf("BEGIN_BODY\n"); idenIndex += yyleng;}
"endbody"	{printf("END_BODY\n"); idenIndex += yyleng;}
"integer"	{printf("INTEGER\n"); idenIndex += yyleng;}
"array"		{printf("ARRAY\n"); idenIndex += yyleng;}
"of"		{printf("OF\n"); idenIndex += yyleng;}
"if"		{printf("IF\n"); idenIndex += yyleng;}
"then"		{printf("THEN\n"); idenIndex += yyleng;}
"endif"		{printf("ENDIF\n"); idenIndex += yyleng;}
"else"		{printf("ELSE\n"); idenIndex += yyleng;}
"while"		{printf("WHILE\n"); idenIndex += yyleng;}
"do"		{printf("DO\n"); idenIndex += yyleng;}
"beginloop"	{printf("BEGINLOOP\n"); idenIndex += yyleng;}
"endloop"	{printf("ENDLOOP\n"); idenIndex += yyleng;}
"continue"	{printf("CONTINUE\n"); idenIndex += yyleng;}
"read"		{printf("READ\n"); idenIndex += yyleng;}
"write"		{printf("WRITE\n"); idenIndex += yyleng;}
"and"		{printf("AND\n"); idenIndex += yyleng;}
"or"		{printf("OR\n"); idenIndex += yyleng;}
"not"		{printf("NOT\n"); idenIndex += yyleng;}
"true"		{printf("TRUE\n"); idenIndex += yyleng;}
"false"		{printf("FALSE\n"); idenIndex += yyleng;}
"return"	{printf("RETURN\n"); idenIndex += yyleng;}

 /*Arithmetic Operators*/

"-"		{printf("SUB\n"); idenIndex += yyleng;}
"+"		{printf("ADD\n"); idenIndex += yyleng;}
"*"		{printf("MULT\n"); idenIndex += yyleng;}
"/"		{printf("DIV\n"); idenIndex += yyleng;}
"%"		{printf("MOD\n"); idenIndex += yyleng;}

 /*Comparison Operators*/

"=="		{printf("EQ\n"); idenIndex += yyleng;}
"<>"		{printf("NEQ\n");idenIndex += yyleng;}
"<"		{printf("LT\n"); idenIndex += yyleng;}
">"		{printf("GT\n"); idenIndex += yyleng;}
"<="		{printf("LTE\n"); idenIndex += yyleng;}
">="		{printf("GTE\n"); idenIndex += yyleng;}

 /*Identifiers and Numbers*/

{IDENTIFIER}	{printf("IDENT %s\n", yytext); idenIndex += yyleng;}
{NUMBER}*	{printf("NUMBER %s\n", yytext); idenIndex += yyleng;}
{FILE}		{printf("FILE: %s\n", yytext); yyin = fopen(yytext, "r");}

 /*Other Special Symbols*/

";"		{printf("SEMICOLON\n"); idenIndex += yyleng;}
":"		{printf("COLON\n"); idenIndex += yyleng;}
","		{printf("COMMA\n"); idenIndex += yyleng;}
"("		{printf("L_PAREN\n"); idenIndex += yyleng;}
")"		{printf("R_PAREN\n"); idenIndex += yyleng;}
"["		{printf("L_SQUARE_BRACKET\n"); idenIndex += yyleng;}
"]"		{printf("R_SQUARE_BRACKET\n"); idenIndex += yyleng;}
":="		{printf("ASSIGN\n"); idenIndex += yyleng;}
"\n"		{++numLines; idenIndex = 1;}
[\t]+		{idenIndex += yyleng;}
[ ]		{idenIndex += yyleng;}
"##".*		{++numLines; idenIndex = 1;}

 /*Errror*/
{NOIDENTBEF}	{idenIndex += yyleng; printf("Error at line %d and column %d: identifier \"%s\" must begin with a letter\n", numLines, idenIndex - 1, yytext); exit(0);}
{NOIDENTAFT}	{idenIndex += yyleng; printf("Error at line %d and column %d: identifier \"%s\" cannot end with an underscore\n", numLines, idenIndex - 1, yytext); exit(0);}
.		{printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", numLines, idenIndex, yytext); ++numLines; idenIndex += yyleng; exit(0);}
%%

int main(/*int argc, char* argv[]*/)
{
	/*if(argc == 2)
	{
		yyin=fopen(argv[1], "r");
	}else{
		yyin=stdin;
	}*/

	yylex();	
}
