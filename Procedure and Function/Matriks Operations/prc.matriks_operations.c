#include "lib.matriks_operations.h"


//Penjumlhan

void tambahMatriks(int matriksPertama[][10], int matriksKedua[][10], int hasil[][10], int baris, int kolom) 
{
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            hasil[i][j] = matriksPertama[i][j] + matriksKedua[i][j];
        }
    }
}


//Pengurangan

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


//Transpose

void transposeMatriks(int matriks[][10], int transpose[][10], int baris, int kolom) 
{
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            transpose[j][i] = matriks[i][j];
        }
    }
}

//Hasil
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
