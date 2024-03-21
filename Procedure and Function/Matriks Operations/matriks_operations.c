#include "prc.matriks_operations.c"

int main()

{
	int pilihan, baris, kolom;
	int matriksPertama[10][10], matriksKedua[10][10], matriksHasil[10][10], matriksAwal[10][10], matriksTranspose[10][10];
	char ulang;
	
	system ("CLS");
	printf("Tugas Algoritma & Pemrograman Pertemuan 5 \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("PAUSE");
	
	do
	{
	
	
		system("CLS");
		printf("==============================\n");
		printf("|    Operasi Matriks   |\n");
		printf("==============================\n");
		printf("1. Penjumlahan \n");
		printf("2. Pengurangan \n");
		printf("3. Transpose \n");
		printf("4. Keluar \n");
		
		
		printf("Pilihan Anda :  ");
		scanf("%d", &pilihan);
		
		switch (pilihan)
		{
			default :
				printf("Pilihan Tidak Valid! \n");
				break;
			
			case 1:
				printf("\n");
				system("cls");
				
	printf("Masukkan jumlah baris dan kolom untuk matriks: ");
    scanf("%d %d", &baris, &kolom);

    printf("Masukkan elemen-elemen untuk matriks pertama:\n");
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            scanf("%d", &matriksPertama[i][j]);
        }
    }

    printf("Masukkan elemen-elemen untuk matriks kedua:\n");
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            scanf("%d", &matriksKedua[i][j]);
        }
    }

    printf("Matriks Pertama:\n");
    tampilkanMatriks(matriksPertama, baris, kolom);

    printf("Matriks Kedua:\n");
    tampilkanMatriks(matriksKedua, baris, kolom);

    tambahMatriks(matriksPertama, matriksKedua, matriksHasil, baris, kolom);

    printf("Matriks Hasil (Penjumlahan Matriks Pertama dan Kedua):\n");
    tampilkanMatriks(matriksHasil, baris, kolom);
				
				break;
			
			case 2: 
				printf("\n");
				system("cls");
				
	printf("Masukkan jumlah baris dan kolom untuk matriks: ");
    scanf("%d %d", &baris, &kolom);

    printf("Masukkan elemen-elemen untuk matriks pertama:\n");
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            scanf("%d", &matriksPertama[i][j]);
        }
    }

    printf("Masukkan elemen-elemen untuk matriks kedua:\n");
    for (int i = 0; i < baris; ++i) 
	{
        for (int j = 0; j < kolom; ++j) 
		{
            scanf("%d", &matriksKedua[i][j]);
        }
    }

    printf("Matriks Pertama:\n");
    tampilkanMatriks(matriksPertama, baris, kolom);

    printf("Matriks Kedua:\n");
    tampilkanMatriks(matriksKedua, baris, kolom);

    kurangiMatriks(matriksPertama, matriksKedua, matriksHasil, baris, kolom);

    printf("Matriks Hasil (Pengurangan Matriks Pertama dan Kedua):\n");
    tampilkanMatriks(matriksHasil, baris, kolom);
				
				break;
			
			case 3:
				printf("\n");
				system("cls");
				
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
				
				break;
				
			case 4:
				printf("\n");
				system ("CLS");
			 	printf("Have a Nice Day :* \n");
			 
				return 0;
				break;
				
		}
		printf("\nIngin Melakukan Sekali Lagi? (Y/N): ");
		scanf(" %c", &ulang);	
	}	
	while  (ulang =='Y' || ulang =='y');
	return 0;
}
