#include <stdio.h>
#include <stdlib.h>

int main()

{
int pilihan,a,d,e,jamMasuk, menitMasuk, jamKeluar, menitKeluar;	
char namapegawai[21], jabatan[21];


	system("CLS");
	printf("1. Program Input Data Pegawai\n", a);
	printf("2. Program Hitung Biaya Parkir\n", d);
	printf("3. Keluar Aplikasi\n", e);
	printf("\n");
	printf("Masukan Pilihan Menu :");
	scanf("%d", &pilihan);
	
	switch (pilihan)
	{
		default: 
			printf("Pilihan Tidak Valid\n");
			break;
		case 1:
			printf("=========================\n");
			printf("Program Input Data Pegawai\n");
			printf("=========================\n");
			
			printf("ID Pegawai : ");
			scanf("%d", &a);
			printf("Nama Pegawai : ");
			scanf("%s", &namapegawai);
			printf("Jabatan : ");
			scanf("%s", &jabatan);
			printf("Jam Kerja Perhari : ");
			scanf("%d", &d);
			printf("Golongan Gaji : ");
			scanf("%d", &e);
			
			printf("\n\n=========================\n");
			printf("Hasil Inputan Data\n");
			printf("=========================\n");
			printf("\n");
			
			printf("ID Pegawai : %d ", a);
			printf("\nNama Pegawai : %s ", namapegawai);
			printf("\nJabatan : %s ", jabatan);
			printf("\nJam Kerja Perhari : %d ", d);
			printf("\nGolongan Gaji : %d ", e);
			break;
		case 2:
			printf("========================\n");
			printf("Program Hitung Biaya Parkir\n");
			printf("========================\n");
			printf("\n");
			
			int biaya =0;

    printf("Masukkan jam masuk (0-23): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan menit masuk (0-59): ");
    scanf("%d", &menitMasuk);

 
    printf("Masukkan jam keluar (0-23): ");
    scanf("%d", &jamKeluar);
    printf("Masukkan menit keluar (0-59): ");
    scanf("%d", &menitKeluar);

    if (jamMasuk > jamKeluar || (jamMasuk == jamKeluar && menitMasuk > menitKeluar)) {
        printf("Waktu masuk tidak valid.\n");
    } else {
        int selisihJam = jamKeluar - jamMasuk;
        int selisihMenit = menitKeluar - menitMasuk;


        biaya = selisihJam * 2000;

        if (selisihJam > 2) {
            biaya += 1000;
        }

        if (selisihJam > 3) {
            biaya += 500;
        }

        printf("Biaya parkir: %d\n", biaya);
    }

    return 0;
}

			
			
			
}
	
	




