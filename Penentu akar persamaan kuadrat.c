/*
	Nama	: Mokhamad Fadlika Maulana
	Nim		: 20230801194
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

	float a,b,c,D,x,x1,x2;
	int subMenu;
	
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
    printf("Aplikasi Penentu Akar Persamaan Kuadrat \n");
    printf("=======================================\n");

	printf(" Masukan Nilai Bilangan a = ");
	scanf("%f",&a);
	   if (a == 0) 
	printf ("Bukan Pers. Kuadrat.\n");
	printf(" Masukan Nilai Bilangan b = ");
	scanf("%f",&b);		
	printf(" Masukan Nilai Bilangan c = ");
	scanf("%f",&c);
printf("-------------------------------------------- \n");

D = (b*b)-(4*a*c);
printf(" Diskriminan = %2.2f\n",D);
printf("		Hasilnya adalah	 \n");
if (D>0)
        {
		 	x1=((-b+sqrt(D))/(2*a));
		 		printf(" x1 = %2.2f\n",x1);
         	x2=((-b-sqrt(D))/(2*a));
                printf(" x2 = %2.2f\n",x2);
                printf(" 	Adalah Bilangan Real Beda	 \n");
		}
else if(D==0)
        {
			x= (-b+sqrt(D))/(2*a);
                printf(" x1 = x2 = %2.2f\n",x);
                printf(" 	Adalah Bilangan Real Sama	 \n");
		}
else
        {
              printf(" 	Adalah Bilangan Imajiner	 \n");
		}
printf("--------------------------------------------\n");

subMenu  :	
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
	case 2 : system ("CLS");
			 printf("Have a Nice Day :* \n");
			 
			 system ("PAUSE");
			 return 0;

getch ();
	}
}
