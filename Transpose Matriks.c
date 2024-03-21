#include <stdio.h>

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

int main() {
    int matriksAwal[10][10], matriksTranspose[10][10];
    int baris, kolom;

    printf("Masukkan jumlah baris dan kolom untuk matriks: ");
    scanf("%d %d", &baris, &kolom);

    printf("Masukkan elemen-elemen untuk matriks:\n");
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            scanf("%d", &matriksAwal[i][j]);
        }
    }

    printf("Matriks Awal:\n");
    tampilkanMatriks(matriksAwal, baris, kolom);

    transposeMatriks(matriksAwal, matriksTranspose, baris, kolom);

    printf("Transpose dari Matriks Awal:\n");
    tampilkanMatriks(matriksTranspose, kolom, baris);

    return 0;
}

