#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Masukkan tinggi pola (bilangan ganjil): ");
    scanf("%d", &c);

    if (c % 2 == 0) 
	{
        printf("Tinggi harus merupakan bilangan ganjil.\n");
        return 1; 
    }
    
  for (a = 1; a <= c - (1 + a); a++) 
  {
        
        for (b = 1; b <= c; b++) 
		{
            if (a <= c / 2) 
			{
                if (b == 1 || b == c || a == 1) 
				{
                    printf(" *");
                } 
				else 
				{
                    printf("  ");
                }
        	}
        }
        printf("\n");
	}

    
    for (a = 0; a < c; a++) 
	{
        for (b = 0; b < a; b++) 
		{
            printf(" ");
        }

        for (b = 0; b < c - a; b++) 
		{
            printf(" -");
        }
        printf("\n");
    }

    for (a = c - 2; a >= 0; a--) 
	{

        for (b = 0; b < a; b++) 
		{
            printf(" ");
        }
        for (b = 1; b <= c - a; b++) 
		{
            printf(" -");
        }      
        printf("\n");
    }
    for (a = c / 2 + 2; a <= c; a++) 
	{
        for (b = 1; b <= c; b++) 
		{
            if (a == c || b == 1 || b == c) 
			{
                printf(" *");
            } 
			else 
			{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

