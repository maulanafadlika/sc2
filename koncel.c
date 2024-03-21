#include "lib.koncel.h"
#include "prc.koncel.c"
#include "stdio.h"
#include "stdlib.h"


void ()

{
	
	char ulang;
	do
	{
	
	
		system("CLS");
		printf("======================\n");
		printf("|   Selamat Datang  |\n");
		printf("======================\n");
		printf("MENU KONVERSI CELCIUS\n");
		printf("1. Celcius --> Fahrenheit \n");
		printf("2. Celcius --> Reamur \n");
		printf("3. Celcius --> Kelvin \n");
		printf("4. Keluar \n");
		
		
		printf("Pilihan Anda :  ");
		scanf("%d", &pilihan);
	}
	while(ulang =='Y' || ulang =='y');
	return 0;
}
