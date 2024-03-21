#include <stdio.h>
#include <stdlib.h>

 //Fungsi untk menampilkan matriks.
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

// Fungsi untuk mencari angka dalam matriks
void cariAngka(int matriks[10][10], int baris, int kolom, int angka) 
{
    int i, j;
    int ditemukan = 0; // Flag untuk menandai apakah angka sudah ditemukan atau belum

    // Melakukan pencarian angka dalam matriks
    for (i = 0; i < baris; i++) 
	{
        for (j = 0; j < kolom; j++) 
		{
            if (matriks[i][j] == angka) 
			{
                printf("%d ditemukan di matriks %d,%d\n", angka, i + 1, j + 1);
                ditemukan = 1; // Set flag menjadi 1 karena angka sudah ditemukan
            }
        }
    }

    // Jika angka tidak ditemukan
    if (!ditemukan) 
	{
        printf("Angka %d tidak ditemukan dalam matriks.\n", angka);
    }
}

int main() 
{
    int matriks[10][10]; // Membatasi ukuran matriks adalah 10x10
    int baris, kolom, i, j, angka;

    printf("Masukkan jumlah baris dan kolom matriks: ");
    scanf("%d %d", &baris, &kolom);

    // Memasukkan elemen-elemen matriks
    printf("Masukkan elemen-elemen matriks:\n");
    printf("\n");
    for (i = 0; i < baris; i++) 
	{
        for (j = 0; j < kolom; j++) 
		{
            printf("Matriks[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }
	
	system("cls");
	printf("Matriks :\n");
    tampilkanMatriks(matriks, baris, kolom);

    // Memasukkan angka yang ingin dicari
    printf("Cari Angka : ");
    scanf("%d", &angka);

    // Memanggil fungsi untuk mencari angka dalam matriks
    cariAngka(matriks, baris, kolom, angka);

    return 0;
}

