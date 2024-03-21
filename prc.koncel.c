#include "lib.koncel.h"
#include "stdlib.h"


void  ()
{
	int pilihan,a;
	float b,c,d;
	char ulang;

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
			 
				break;
		}
		printf("\nIngin Melakukan Sekali Lagi? (Y/N): ");
		scanf(" %c", &ulang);
}

