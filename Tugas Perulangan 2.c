#include <stdio.h>
#include <stdlib.h>

int main()
{

    int h,i,j;

  
    printf("Input Bilangan: ");
    scanf("%d", &h);

    for (int i=1;i<=h;i++)
	{
		for (int j=1;j<=i;j++)
		{
            printf("*");
        }
        printf("\n");
	} 
	   
    return 0;
}
