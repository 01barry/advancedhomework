#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char X;
	for (X=65; X<=90; X++)
	
	{
		printf("%c ",X);
	}
	
	printf("\n");
	for (X=97; X<=122; X++)
	
	{
		printf("%c ",X);
	}
	
	printf("\n");
	system ("pause");
	return 0;
}
