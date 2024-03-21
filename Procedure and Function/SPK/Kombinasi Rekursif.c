#include <stdio.h>

// Fungsi rekursif untuk menghitung faktorial
unsigned long long faktorial(int n) {
    if (n == 0 || n == 1) {
        printf("%d", n);
        return 1;
    } else {
        printf("%d * ", n);
        return n * faktorial(n - 1);
    }
}

// Fungsi untuk menghitung kombinasi
unsigned long long kombinasi(int n, int r) {
    printf("==============================\n");
    printf("KOMBINASI\n");
    printf("==============================\n");

    printf("Masukan Nilai n : %d\n", n);
    printf("Masukan Nilai r : %d\n", r);
    printf("Rumus Kombinasi:\n");
    printf("____n!____\n");
    printf(" r!(n-r)!\n");

    printf("\nFaktorisasi n dengan nilai %d:\n", n);
    printf("___________________________\n");
    printf("Begin Factorisation Process\n");
    printf("---------------------------\n");

    unsigned long long fakt_n = faktorial(n);
    printf(" = %llu\n\n", fakt_n);

    printf("Faktorisasi r dengan nilai %d:\n", r);
    printf("___________________________\n");
    printf("Begin Factorisation Process\n");
    printf("---------------------------\n");

    unsigned long long fakt_r = faktorial(r);
    printf(" = %llu\n\n", fakt_r);

    printf("Faktorisasi (n-r) dengan nilai %d:\n", n - r);
    printf("___________________________\n");
    printf("Begin Factorisation Process\n");
    printf("---------------------------\n");

    unsigned long long fakt_nr = faktorial(n - r);
    printf(" = %llu\n\n", fakt_nr);

    printf("Maka Sama Dengan:\n");
    printf("%llu / <%llu . %llu>\n\n", fakt_n, fakt_r, fakt_nr);

    unsigned long long hasil_kombinasi = fakt_n / (fakt_r * fakt_nr);

    printf("Maka Hasil Kombinasi dari %dC%d adalah %llu\n", n, r, hasil_kombinasi);

    return hasil_kombinasi;
}

int main() {
    int n, r;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    kombinasi(n, r);

    return 0;
}

