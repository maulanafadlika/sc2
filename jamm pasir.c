#include <stdio.h>

int main() 
{
    int a,b,c;

    printf("Masukkan tinggi huruf M: ");
    scanf("%d", &c);
	
    for ( a = 0; a < c; a++) 
	{
        for ( b = 0; b < c * 2 - 1; b++) 
		{
            if (b == 0 || b == c 
			* 2 - 2 || (a == b && b <= c - 1) || (b == c * 2 - 2 - a && b >= c)) 
			{
                printf("*");
            } 
			else 
			{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

