#include <stdio.h>
#include <stdlib.h>

// Fungsi rekursif untuk menghitung faktorial
unsigned long long faktorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * faktorial(n - 1);
    }
}

// Fungsi rekursif untuk menghitung permutasi
unsigned long long permutasi(int n, int r) 
{
    printf("Rumus Permutasi:\n");
    printf("____n!___\n");
    printf("( n - r ) !\n");
    printf("\n");

    printf("==============================\n");
    printf("PERMUTASI\n");
    printf("==============================\n");

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    printf("Masukan Nilai n : %d\n", n);
    printf("Masukan Nilai r : %d\n\n");

    if (n < r) {
        printf("Error: n harus lebih besar atau sama dengan r.\n");
        return 0;
    }

    printf("Faktorisasi n dengan nilai %d:\n", n);
    printf("___________________________\n");
    printf("Begin Factorisation Process\n");
    printf("---------------------------\n");

    unsigned long long fakt_n = faktorial(n);
    printf(" = %llu\n", fakt_n);

    printf("\nFaktorisasi (n-r) dengan nilai %d:\n", n - r);
    printf("___________________________\n");
    printf("Begin Factorisation Process\n");
    printf("---------------------------\n");

    unsigned long long fakt_nr = faktorial(n - r);
    printf(" = %llu\n\n", fakt_nr);

    printf("Maka Sama Dengan:\n");
    printf("%llu / %llu\n\n", fakt_n, fakt_nr);

    unsigned long long hasil_permutasi = fakt_n / fakt_nr;

    printf("Maka Hasil Permutasi dari %dP%d adalah %llu\n", n, r, hasil_permutasi);

    return hasil_permutasi;
}

// Fungsi rekursif untuk menghitung kombinasi
unsigned long long kombinasi(int n, int r) 
{
    printf("==============================\n");
    printf("KOMBINASI\n");
    printf("==============================\n");

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    printf("Masukan Nilai n : %d\n", n);
    printf("Masukan Nilai r : %d\n");
    printf("Rumus Kombinasi:\n");
    printf("____n!____\n");
    printf(" r!(n-r)!\n");

    if (n < r) {
        printf("Error: n harus lebih besar atau sama dengan r.\n");
        return 0;
    }

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

// Fungsi rekursif untuk menghitung bilangan Fibonacci ke-n
unsigned long long fibonacci(int n) 
{
    printf("==============================\n");
    printf("FIBONACI\n");
    printf("==============================\n");

    printf("Masukan Nilai n : ");
    scanf("%d", &n);

    if (n <= 1) 
    {
        printf("Bilangan Fibonacci ke %d adalah %llu\n", n, n);
        return n;
    } 
    else 
    {
        unsigned long long hasil_fibonacci = fibonacci(n - 1) + fibonacci(n - 2);
        printf("Bilangan Fibonacci ke %d adalah %llu\n", n, hasil_fibonacci);
        return hasil_fibonacci;
    }
}

int main() 
{
    int pilihan, n, r;

    do 
    {
        printf("Aplikasi Rekursif\n");
        printf("_________________\n\n");
        printf("Menu :\n");
        printf("[1] Permutasi\n");
        printf("[2] Kombinasi\n");
        printf("[3] Fibonacci\n");
        printf("[4] Keluar\n\n");
        printf("Masukkan Pilihan [1-4]: ");
        scanf("%d", &pilihan);

        switch (pilihan) 
        {
            case 1:
                permutasi(n, r);
                break;
            case 2:
                kombinasi(n, r);
                break;
            case 3:
                fibonacci(n);
                break;
            case 4:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih [1-4].\n");
        }

    } while (pilihan != 4);

    return 0;
}

