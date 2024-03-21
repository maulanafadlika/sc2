#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int a,b,c;
	
	printf("Input Angka yang Diinginkan : ");
	scanf("%d", &c);
	
	for(b=1; b<=(c-1); b++)
	{
		for(a=(c-2); a>=b; a--)
		{
			printf("_");
		}
		for (a= 0; a<=b; a++)
		{
			printf("*");
		}
		for (a= c; a>=1; a--)
		{
			printf("_");
		}
		for (a= 0; a<=b; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (b=1; b<=2; b++)
	{
		for (a=1; a<=c+(b-1); a++)
		{
			printf("_");
		}
		for (a=1; a<=c-((b-1)*2); a++)
		{
			printf("*");
		}
		printf("\n");		
	}
	getch();
	return 0;	
}
