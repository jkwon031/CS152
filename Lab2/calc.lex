/*
	Junyoung Kwon
	861274236
	Task 1
*/


%{
	#include "y.tab.h"
	int numInt = 0;
	int numDec = 0;
	int numOps = 0;
	int numParen = 0;
	int numEq = 0;
	int numSci = 0;
	int currLine = 1, currPos = 1;
%}

SCIENTIFIC	 [0-9]*(\.[0-9]*)?([Ee][+\-]?[0-9]*)?

%%

"+"		{ currPos += yyleng; ++numOps; return PLUS;}
"-"		{ currPos += yyleng; ++numOps; return MINUS;}
"*"		{ currPos += yyleng; ++numOps; return MULT;}
"/"		{ currPos += yyleng; ++numOps; return DIV;}
"("		{ currPos += yyleng; ++numParen; return L_PAREN;}
")"		{ currPos += yyleng; ++numParen; return R_PAREN;}
"="		{ currPos += yyleng; ++numEq; return EQUAL;}

{SCIENTIFIC}+	{ currPos += yyleng; yylval.dval = atof(yytext); ++numSci; return SCI;}

.		{printf("Error at line %d, column %d: unrecoginzed symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

[ \t]+		{/* ignore spaces */ currPos += yyleng;}

"\n"		{currLine++; currPos = 1; return END;}

%%

/*int main()
{
	yylex();
	printf("Number of integers: %d\n", numInt);
	printf("Number of decimals: %d\n", numDec);
	printf("Number of operators: %d\n", numOps);
	printf("Number of parentheses: %d\n", numParen);
	printf("Number of equal signs: %d\n", numEq);
	printf("Number of scientific numbers: %d\n", numSci);
}*/
