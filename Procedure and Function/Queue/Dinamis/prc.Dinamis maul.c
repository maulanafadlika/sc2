#include "lib.Dinamis maul.h"

// Fungsi untuk menambah antrian
void tambahAntrian(char *nama) 
{
		system("cls");
    	printf("Masukkan Nama: ");
        scanf("%s", nama);
        printf("\n");
        printf("------------------------------\n");
    if (antrian.belakang == MAX_QUEUE_SIZE - 1)
        printf("Antrian penuh\n");
    
	else 
	{
        if (antrian.depan == -1)
            antrian.depan = 0;

        int nomor_saat_ini = antrian.belakang - antrian.depan + 2; // Nomor antrian saat ini
        strcpy(antrian.nama[++antrian.belakang], nama);
        printf("\n");
        printf("No. Antrian : %d\nNama        : %s\n\n", nomor_saat_ini, nama);
    }
    printf("------------------------------\n");
}

// Fungsi untuk melayani antrian
void layaniAntrian(int penyedia_jasa) 
{
    int i;
    system("cls");
    char *executors[]={"Anti", "Bella", "Citra"};
    printf("\n");
    printf("List Barber :\n1. Anti\n2. Bella\n3. Citra\nPilihan   : ");
    scanf("%d", &penyedia_jasa);
    printf("----------------------------------\n");
    if (antrian.depan == -1) 
	{
        printf("Antrian kosong\n");
        return;
    }

    printf("No. Antrian : 1\nNama        : %s\nBarber      : %s\n\n",
           antrian.nama[antrian.depan], executors[penyedia_jasa - 1]);

    keuntungan.pendapatan[penyedia_jasa - 1] += SERVICE_PRICE; // Menambah pendapatan dari penyedia jasa
    keuntungan.pendapatan[3] += 8000; // Menambah pendapatan dari kemitraan sebesar 8000

    // Menghapus antrian pertama tanpa memindahkan antrian lain
    antrian.depan++;
    if (antrian.depan > antrian.belakang) 
	{
        // Jika setelah penghapusan antrian pertama tidak ada antrian lagi,
        // reset depan dan belakang ke nilai default
        antrian.depan = -1;
        antrian.belakang = -1;
    }
    printf("----------------------------------\n");
}

// Fungsi untuk menampilkan data antrian
void tampilkanDataAntrian() 
{
    int i;
    system("cls");
    printf("------- Data Antrian -------\n");
    if (antrian.depan == -1) 
	{
        printf("DATA BELUM ADA\n\n");
    } 
	else 
	{
        for (i = antrian.depan; i <= antrian.belakang; ++i) 
		{
            int nomor_saat_ini = i - antrian.depan + 1; // Nomor antrian saat ini
            int sisa_antrian = i - antrian.depan; // Sisa antrian dari nama yang sedang ditampilkan
            printf("No. Antrian  : %d\nNama      : %s\nSisa Antrian : %d\n\n", nomor_saat_ini, antrian.nama[i], sisa_antrian);
        }
    }
    printf("----------------------------\n");
}

// Fungsi untuk menampilkan pendapatan
void tampilkanPendapatan() 
{
    printf("-------- Pendapatan --------\n");
    int total_pendapatan = 0;
    int i;

		printf("Keuntungan Kemitraan        : Rp. %d,-\n", keuntungan.pendapatan[3]);
		printf("\n");
    for (i = 0; i < 3; ++i) 
	{
        printf("- %s    	: Rp. %d,-\n", penyedia_jasa[i], keuntungan.pendapatan[i]);
        total_pendapatan += keuntungan.pendapatan[i];
    }
    
    printf("----------------------------\n");
}
