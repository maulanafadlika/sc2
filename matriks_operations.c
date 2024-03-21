#include "matrix_operations.h"
#include <stdio.h>

int main() {
    int matriksPertama[10][10], matriksKedua[10][10], matriksHasil[10][10];
    int baris, kolom;

    printf("Masukkan jumlah baris dan kolom untuk matriks: ");
    scanf("%d %d", &baris, &kolom);

    printf("Masukkan elemen-elemen untuk matriks pertama:\n");
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            scanf("%d", &matriksPertama[i][j]);
        }
    }

    printf("Masukkan elemen-elemen untuk matriks kedua:\n");
    for (int i = 0; i < baris; ++i) {
        for (int j = 0; j < kolom; ++j) {
            scanf("%d", &matriksKedua[i][j]);
        }
    }

    printf("Matriks Pertama:\n");
    tampilkanMatriks(matriksPertama, baris, kolom);

    printf("Matriks Kedua:\n");
    tampilkanMatriks(matriksKedua, baris, kolom);

    printf("Matriks Hasil (Penjumlahan Matriks Pertama dan Kedua):\n");
    tambahMatriks(matriksPertama, matriksKedua, matriksHasil, baris, kolom);
    tampilkanMatriks(matriksHasil, baris, kolom);

    printf("Matriks Hasil (Pengurangan Matriks Pertama dan Kedua):\n");
    kurangiMatriks(matriksPertama, matriksKedua, matriksHasil, baris, kolom);
    tampilkanMatriks(matriksHasil, baris, kolom);

    printf("Transpose dari Matriks Pertama:\n");
    int transpose[10][10];
    transposeMatriks(matriksPertama, transpose, baris, kolom);
    tampilkanMatriks(transpose, kolom, baris);

    return 0;
}

