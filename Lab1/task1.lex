/*
	Junyoung Kwon
	861274236

	Task 1

*/



NUMBER	[0-9]*
DECIMAL {NUMBER}\.{NUMBER}
SCIENTIFIC [+-]?{NUMBER}(\.{NUMBER})?([Ee][+-]?{NUMBER})
FILE [A-Za-z{NUMBER}]*\.txt
	int numInt = 0;
	int numDec = 0;
	int numOps = 0;
	int numParen = 0;
	int numEq = 0;
	int numSci = 0;
%%

{NUMBER}	{printf("NUMBER %s ", yytext); ++numInt;}	
{DECIMAL}	{printf("NUMBER %s ", yytext); ++numDec;}
{SCIENTIFIC}	{printf("NUMBER %s ", yytext); ++numSci;}
{FILE}		{printf("FILE: %s", yytext); yyin = fopen(yytext, "r");}
"+"		{printf("PLUS "); ++numOps;}
"-"		{printf("MINUS "); ++numOps;}
"*"		{printf("MULT "); ++numOps;}
"/"		{printf("DIV "); ++numOps;}
"("		{printf("L_PAREN "); ++numParen;}
")"		{printf("R_PAREN "); ++numParen;}
"="		{printf("EQUAL "); ++numEq;}

.		{printf("ERROR: UNRECOGNIZED CHARACTER\n"); exit(0);}
%%

int main()
{
	yylex();
	printf("Number of integers: %d\n", numInt);
	printf("Number of decimals: %d\n", numDec);
	printf("Number of operators: %d\n", numOps);
	printf("Number of parentheses: %d\n", numParen);
	printf("Number of equal signs: %d\n", numEq);
	printf("Number of scientific numbers: %d\n", numSci);
}
