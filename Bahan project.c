#include <stdio.h>
#include <stdlib.h>

void garis_pa() 
{
	int i;
    for (i = 0; i < 50; i++)
	{
        printf("=");
    }
    printf("\n");
}

int main() 
{
    int pilihan;

    while (1) 
	{
        system("cls"); // Membersihkan layar

        garis_pa();
        printf("1. Pembuat program\n");
        printf("2. Penjumlahan Deret\n");
        printf("3. Menampilkan Banyak Bilangan\n");
        printf("4. Rata-Rata\n");
        printf("5. Faktorial\n");
        printf("6. Keluar\n");
        garis_pa();

        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) 
		{
            case 1:
                // 
                garis_pa();
                printf("    PROJEK TUGAS PRAKTIKUM 4\n");
                printf("Nama  : Bima Setya Ramadhan\n");
                printf("NIM   : 20230801175\n");
                printf("Email : setyabima181@students.esaungul.ac.id\n");
                printf("=================================\n");
                garis_pa();
                break;
            case 2:
                // 
                printf("\n");
                int n = 0;
                int i = 0;
                int sum = 0;

                printf("Masukkan jumlah elemen deret: ");
                scanf("%d", &n);
                  for (i = 1; i <= n; i++) {
                    sum += i;
                }

                printf("Jumlah deret aritmatika dari 1 hingga %d adalah: %d\n", n, sum);
                break;
            case 3:
            	//
                printf("\n");
                int m;
                printf("Masukkan jumlah bilangan yang ingin ditampilkan: ");
                scanf("%d", &m);

                printf("Bilangan-bilangan dari 1 hingga %d adalah:\n", m);
                for (i = 1; i <= m; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;
            case 4:
                // 
                printf("\n");
            	int k;
                float summ = 0.0;
                printf("Masukkan jumlah bilangan yang ingin dihitung rata-ratanya: ");
                scanf("%d", &k);

                if (k <= 0) {
                    printf("Jumlah harus lebih dari 0.\n");
                    break; // Lanjutkan pemilihan menu
                }

                for (i = 1; i <= k; i++) {
                    float num;
                    printf("Masukkan bilangan ke-%d: ", i);
                    scanf("%f", &num);
                    summ += num;
                }

                float rata_rata = summ / k;
                printf("Rata-rata dari %d bilangan yang dimasukkan adalah: %.2f\n", k, rata_rata);
                break;
           case 5:
    			// Kode untuk menu 5
   				printf("\n");
    			int angka;
    			long long faktorial = 1;

    			printf("Masukkan angka: ");
    			if (scanf("%d", &angka) != 1) {
        		// Input bukan bilangan bulat yang valid
        		printf("KUDU MAKE ANGKA KEHED TEU MEUNANG HURUF.\n");
    			} else if (angka < 0) {
        		// Periksa jika input adalah bilangan negatif
        		printf("ULAH NEGATIF KEHED.\n");
    			}else {
        		printf("Faktorial dari %d! adalah: ", angka);

        		// Hitung faktorial dari besar ke kecil
        		for (i = angka; i >= 1; --i) {
            	faktorial *= i;
            	// Cetak urutan angka dengan tanda seru
            	if (i > 1) {
                printf("%d x ", i);
            	} else {
                printf("%d = %lld\n", i, faktorial);
            	}
        		}
    			}
    			break;

            case 6:
                return 0; // Keluar dari program
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }

        printf("Tekan Enter untuk melanjutkan...");
        getchar(); // Menunggu tombol Enter
        getchar(); // Menghapus karakter baris baru dari buffer
    }
    return 0;
}
