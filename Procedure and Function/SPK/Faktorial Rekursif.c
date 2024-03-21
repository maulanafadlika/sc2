#include <stdio.h>
#include <stdlib.h>

// Fungsi rekursif untuk menghitung faktorial
unsigned long long faktorial(int n) 
{
    if (n == 0 || n == 1) 
	{
        printf("%d", n);
        return 1;
    } 
	else 
	{
        printf("%d * ", n);
        return n * faktorial(n - 1);
    }
}

// Fungsi untuk menghitung permutasi
unsigned long long permutasi(int n, int r) 
{
	system("cls");
	printf("Rumus Permutasi:\n");
	printf("____n!___\n");
	printf("( n - r ) !\n");
	printf("\n");
	
    printf("==============================\n");
    printf("PERMUTASI\n");
    printf("==============================\n");

    printf("Masukan Nilai n : %d\n", n);
    printf("Masukan Nilai r : %d\n\n", r);

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

    printf("Maka Hasil Kombinasi dari %dP%d adalah %llu\n", n, r, hasil_permutasi);

    return hasil_permutasi;
}

int main() 
{
    int n, r;

	while(1)
	{
	
    	printf("Masukkan nilai n: ");
    	scanf("%d", &n);

    	printf("Masukkan nilai r: ");
    	scanf("%d", &r);

    	permutasi(n, r);
		
    	getchar(); // Mengonsumsi karakter baru (newline) dalam buffer setelah memasukkan pilihan
    	printf("Tekan Enter untuk melanjutkan...");
    	getchar(); // Menunggu pengguna menekan Enter sebelum kembali ke menu utama
    	system("cls");
	}
	return 0;
}

