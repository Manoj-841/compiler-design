%{
	#include<stdio.h>
%}

%%
[A-Z]+[\t\n ] { printf("%s is a capital letter",yytext); }
.  ;
%%

int main( ) 
{
	printf("Enter String :\n");
	yylex();
}
int yywrap( )
{
	return 1;
}
