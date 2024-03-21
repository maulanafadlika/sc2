#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
	int pilihan, a,b,c;
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
		printf("|    Belajar Menggambar :*   |\n");
		printf("==============================\n");
		printf("1. Trapesium \n");
		printf("2. Jam Pasir \n");
		printf("3. Huruf M \n");
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
				
				printf("Input Angka yang Diinginkan : ");
				scanf("%d", &c);
	
				for(b=1; b<=(c-1); b++)
					{
						for(a=(c-2); a>=b; a--)
							{
								printf("  ");
							}
						for (a= 0; a<=b; a++)
							{
								printf(" *");
							}
						for (a= c; a>=1; a--)
							{
								printf(" ^");
							}
						for (a= 0; a<=b; a++)
							{
								printf(" *");
							}
								printf("\n");
					}
				break;
				
			case 2:
				printf("\n");
				
				printf("Masukkan tinggi pola (bilangan ganjil): ");
    			scanf("%d", &c);

    			if (c % 2 == 0) 
					{
        				printf("Tinggi harus merupakan bilangan ganjil.\n");
        				return 1; 
    				}		
    
  					for (a = 1; a <= c - (1 + a); a++) 
  					{
        
        					for (b = 1; b <= c; b++) 
						{
            					if (a <= c / 2) 
							{	
                			if (b == 1 || b == c || a == 1) 
								{
                    				printf(" *");
                				} 
							else 
								{
                    				printf("  ");
                				}
        					}
        				}
        				printf("\n");
					}
					
					for (a = 0; a < c; a++) 
					{
        				for (b = 0; b < a; b++) 
							{
            					printf(" ");
       						}

        				for (b = 0; b < c - a; b++) 
							{
            					printf(" -");
        					}
        				printf("\n");
    				}

    				for (a = c - 2; a >= 0; a--) 
					{

        				for (b = 0; b < a; b++) 
							{
            					printf(" ");
        					}
        				for (b = 1; b <= c - a; b++) 
							{
            					printf(" -");
        					}      
        				printf("\n");
    				}
    				for (a = c / 2 + 2; a <= c; a++) 
					{
        				for (b = 1; b <= c; b++) 
							{
            					if (a == c || b == 1 || b == c) 
									{
                						printf(" *");
            						} 
								else 
									{
                						printf("  ");
            						}
        					}
        				printf("\n");
    				}
    			break;
    			
			case 3:
				printf("\n");
				
				printf("Masukkan tinggi huruf M: ");
    			scanf("%d", &c);
	
    			for ( a = 0; a < c; a++) 
					{
        				for ( b = 0; b < c * 2 - 1; b++) 
							{
            					if (b == 0 || b == c * 2 - 2 || (a == b && b <= c - 1) || (b == c * 2 - 2 - a && b >= c)) 
									{
                						printf("*");
            						} 
								else 
									{
                						printf(" ");
            						}
        					}
        					printf("\n");
    				}
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
