#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

int main()

{
	int pilihan,a;
	float b,c,d;
	char ulang;
	
	do
	{
	
	
		system("CLS");
		printf("======================\n");
		printf("|    Selamat Datang  |\n");
		printf("======================\n");
		printf("MENU KONVERSI CELCIUS\n");
		printf("1. Celcius --> Fahrenheit \n");
		printf("2. Celcius --> Reamur \n");
		printf("3. Celcius --> Kelvin \n");
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
					
					printf("Masukan Suhu Celcius : ");
					scanf("%d", &a);
					
					b = (9.0/5.0 * a) + 32;
					
					printf("%d Derajat Celsius = %.2f Derajat Fahrenheit \n",a,b);
					break;
					
				case 2:
					printf("\n");
					
					printf("Masukan Suhu Celcius : ");
					scanf("%d", &a);
					
					c = a * (4.0/5.0);
					
					printf("%d derajat Celsius = %.2f derajat Reamur \n",a,c);
					break;
					
				case 3:
					printf("\n");
					
					printf("Masukan Suhu Celcius : ");
					scanf("%d", &a);
					
					d = a + 273.15;
					
					printf("%d derajat Celsius = %.2f derajat Kelvin \n",a,d);
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
	while(ulang =='Y' || ulang =='y');
	return 0;
					
}
