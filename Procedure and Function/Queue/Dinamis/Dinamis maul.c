#include "prc.Dinamis maul.c"

int main() 
{
	
	
	int pilihan;
	char nama[50];
	int penyedia_jasa;
	int i;
	
	printf("Tugas Algoritma & Pemrograman Pertemuan 13 \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("PAUSE");
		
    while (pilihan !=5) 
	{
		
		system("cls");
        printf("\n-------------------------------\n");
        printf("        Barber Pop\n");
        printf("Jl. Perhatian Blok I No. 3U\n");
        printf("\n-------------------------------\n");
        printf("    --------MENU-------\n");
        printf(" 1. Tambah Antrian\n");
        printf(" 2. Lets Shave!!!\n");
        printf(" 3. Data Antrian\n");
        printf(" 4. Pendapatan\n");
        printf(" 5. Keluar\n");
        printf("\n-------------------------------\n");

        printf("Masukan Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) 
		{
            case 1:
                tambahAntrian(nama);
                break;
            case 2:
                layaniAntrian(penyedia_jasa);
                break;
            case 3:
                tampilkanDataAntrian();
                break;
            case 4:
            	system("cls");
                tampilkanPendapatan();
                break;
            case 5:
            	printf("Have a Nice Day ^.^");
                exit(0);
            default:
                printf("Pilihan tidak valid. Silakan pilih lagi.\n");
        }
        getchar(); // Mengonsumsi karakter baru (newline) dalam buffer setelah memasukkan pilihan
        printf("Tekan Enter untuk melanjutkan...");
        getchar(); // Menunggu pengguna menekan Enter sebelum kembali ke menu utama
    }

    return 0;
}

