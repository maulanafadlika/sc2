/*
	Nama	: Mokhamad Fadlika Maulana
	Nim		: 20230801194
*/


#include <stdio.h>


int main()
{
	float   iPenjumlahan, iPengurangan, iPerkalian, iPembagian;
    int 	subMenu, num1,num2;
    
	system ("CLS");
	printf("Tugas Algoritma & Pemrograman [Kalkulator Sederhana] \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system("PAUSE");
Awal :
	system("CLS");   
    printf("====================================\n");
    printf("Aplikasi Kalkulator Sederhana\n");
    printf("====================================\n");    

	
	printf("Masukkan Angka Pertama: ");
	scanf("%d", &num1);
    printf("Masukkan Angka Kedua  : "); 
	scanf("%d", &num2);
	
	
	iPenjumlahan = num1+num2;
	iPengurangan = num1-num2;
	iPerkalian = num1*num2;
	iPembagian = (float)num1/num2;
	
	printf("\n");
	printf("Penjumlahan dari %d + %d = %.2lf \n", num1, num2, iPenjumlahan);
	printf("Pengurangan dari %d - %d = %.2lf \n", num1, num2, iPengurangan);
	printf("Perkalian   dari %d * %d = %.2lf \n", num1, num2, iPerkalian);
	printf("Pembagian   dari %d / %d = %.2lf \n", num1, num2, iPembagian);
	
subMenu : 
	printf("\n");
	printf("=====================\n");
	printf("Pilihan Menu\n");
	printf("=====================\n");
	printf("1. Kembali Ke Awal\n");
	printf("2. Keluar Aplikasi\n");
	
	printf("\n");
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", &subMenu);
	
	switch(subMenu)	
	{
	default :printf("Pilihan Menu Tidak Ada\n");
			 printf("Silahkan Coba Lagi\n");
			 printf("\n");				

			 goto subMenu;
			 break;	
	case 1 : goto Awal;
			 break;
	case 2 
	: system ("CLS");
			 printf("Have a Nice Day :* \n");
			 
			 system ("PAUSE");
			 return 0;
			 
			
	}
	
}

    
