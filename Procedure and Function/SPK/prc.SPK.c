#include "lib.SPK.h"

void swap(int *a, int *b) 
{
	int temp = *a;
    *a = *b;
    *b = temp;
}

void bagiKelas(int z1, int b, int c[]) 
{
	int v1[b / 2], i, j;
    for (i = 0, j = 0; i < b; i += 2, j++) 
	{
        v1[j] = c[i] + c[i + 1];
    }

    for (i = 0; i < b / 2 - 1; i++) 
	{
        for (j = 0; j < b / 2 - i - 1; j++) 
		{
            if (c[j * 2 + 1] < c[(j + 1) * 2 + 1]) 
			{
                swap(&v1[j], &v1[j + 1]);
                swap(&c[j * 2], &c[(j + 1) * 2]);
                swap(&c[j * 2 + 1], &c[(j + 1) * 2 + 1]);
            }
        }
    }

    for (i = 0; i < z1; i++)
	 {
        printf("Kelas X-%d :\n", i + 1);
        for (j = i; j < b / 2; j += z1) 
		{
            if (j < b / 2) 
			{
                printf("%d | %d\n", c[j * 2], c[j * 2 + 1]);
            } 
			else 
			{
                printf("0 | 0\n");
            }
        }
        printf("------------------------\n");
    }   
}

void pasangData (int c[i], int b) 
{
    for (int i = 0; i < b; i++) 
	{
        int x1;
        printf("data ke %d : ", i + 1);
        scanf("%d", &x1);
        c[i] = x1;
    }
}


