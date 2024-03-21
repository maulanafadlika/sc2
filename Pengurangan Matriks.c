#include <stdio.h>

void kurangiMatriks(int matriksPertama[][10], int matriksKedua[][10], int hasil[][10], int baris, int kolom) 
{
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            hasil[i][j] = matriksPertama[i][j] - matriksKedua[i][j];
        }
    }
}

void tampilkanMatriks(int matriks[][10], int baris, int kolom) 
{
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            printf("%d  ", matriks[i][j]);
            if (j == kolom - 1) 
			{
                printf("\n");
            }
        }
    }
}

int main() 
{
    int matriksPertama[10][10], matriksKedua[10][10], matriksHasil[10][10];
    int baris, kolom;

    printf("Masukkan jumlah baris dan kolom untuk matriks: ");
    scanf("%d %d", &baris, &kolom);

    printf("Masukkan elemen-elemen untuk matriks pertama:\n");
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            scanf("%d", &matriksPertama[i][j]);
        }
    }

    printf("Masukkan elemen-elemen untuk matriks kedua:\n");
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            scanf("%d", &matriksKedua[i][j]);
        }
    }

    printf("Matriks Pertama:\n");
    tampilkanMatriks(matriksPertama, baris, kolom);

    printf("Matriks Kedua:\n");
    tampilkanMatriks(matriksKedua, baris, kolom);

    kurangiMatriks(matriksPertama, matriksKedua, matriksHasil, baris, kolom);

    printf("Matriks Hasil (Pengurangan Matriks Pertama dan Kedua):\n");
    tampilkanMatriks(matriksHasil, baris, kolom);

    return 0;
}

