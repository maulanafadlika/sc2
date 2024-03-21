#include "lib.Sudoku.h"


void tentukan(matriksint M1)
{
	M1[0][0]=4;	M1[0][1]=1;	M1[0][2]=2;	M1[0][3]=3;
	M1[1][0]=3;	M1[1][1]=4;	M1[1][2]=1;	M1[1][3]=4;
	M1[2][0]=1;	M1[2][1]=3;	M1[2][2]=4;	M1[2][3]=2;
	M1[3][0]=4;	M1[3][1]=2;	M1[3][2]=3;	M1[3][3]=1;
}
void inisiasi (matriksint M2,matriksint M1, int a)
{
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i==j && i!=2)
			{
				M2[i][j]=M1[i][j];
			}
			else if(i==j+2)
			{
				M2[i][j]=M1[i][j];
			}
			else
			{
				M2[i][j]=0;
			}
		}
	}
}
int periksa(matriksint M1, matriksint M2, int a)
{
	for(i=0;i<a;i++)
	{
		
		for(j=0;j<a;j++)
		{
			if(M1[i][j] != M2[i][j])
			{
				k=1;
				i=a+1;
				j=a+1;
			}
			else
			{
				k=2;
			}
		}
	}
	return k;
}

void baca(matriksint M1, matriksint M2, int a)
{
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i==j && i!=2)
			{
				printf("%d  ",M1[i][j]);
			}
			else if(i==j+2)
			{
				printf("%d  ",M1[i][j]);
			}
			else
			{
				if(M1[i][j]==M2[i][j])
				{
					printf("%d  ",M1[i][j]);
				}
				else
				{
					printf("*  ");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

void tulis(matriksint M1, matriksint M2, int a) 
{
    printf("Silahkan Bermain\n");
    printf("---------------------------\n\n");
    for (i = 0; i < a; i++) 
	{
        for (j = 0; j < a; j++) 
		{
            if (M1[i][j] != M2[i][j]) 
			{
                printf("Masukan Angka Baris %d kolom %d : ", i + 1, j + 1);
                scanf("%d", &M2[i][j]);
            }
        }
    }
}
