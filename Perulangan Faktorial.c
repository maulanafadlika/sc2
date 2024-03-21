#include <stdio.h>
 
int main()
{
	int angka,hasil,i, subMenu;
	
	system ("CLS");
	printf("Tugas Algoritma & Pemrograman Penentu Akar Persamaan Kuadrat \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("PAUSE");
	
Awal :
	
	system ("CLS");   
    printf("=======================================\n");
  	printf("## Program Bahasa C Menghitung Faktorial ## \n");
  	printf("=========================================== \n\n");
 
 
  printf("Input angka: ");
  scanf("%d",&angka);
 
  printf("%d! = ",angka);
 
  hasil = 1;
  for(i=1; i<=angka; i++) 
  {
    hasil = hasil * i;
 
 
    printf("%d",i);
    if(i != angka) 
	{
      printf (" * ");
    }
  }
  printf(" = %d \n",hasil);
  
subMenu  :	
	printf("\n");
	printf("=====================\n");
	printf("Pilihan Menu\n");
	printf("=====================\n");
	printf("1. Kembali Ke Awal\n");
	printf("2. Keluar Aplikasi\n");
	
	printf("\n");
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", subMenu);
	
	switch(subMenu)	
	{
	default :printf("Pilihan Menu Tidak Ada\n");
			 printf("Silahkan Coba Lagi\n");
			 printf("\n");				

			 goto subMenu;
			 break;	
	case 1 : goto Awal;
			 break;
	case 2 : system ("CLS");
			 printf("Have a Nice Day :* \n");
			 
			 system ("PAUSE");
 
  	return 0;
  	getch();
  	
	}
}
