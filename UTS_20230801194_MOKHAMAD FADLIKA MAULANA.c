#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
	int pilihan, a,b,c,j,hasil, jumlahBakwan, jumlahGehu, jumlahPisgor, kardusBakwan, kardusGehu, kardusPisgor, totalKardus, totalKeseluruhan, rowSum;
	int bakwan,dus_bakwan,gehu,dus_gehu,pisang,dus_pisang,jumlah_dus;
	int  n, i, bilangan, jumlahGenap = 0, banyakGenap = 0;
	double average, sum;
	char ulang;
	
	system ("CLS");
	printf("UJIAN TENGAH SEMESTER ALGORITMA DAN PEMROGRAMAN\n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad adlika Maulana \n");
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
		printf("|    Selamat Datang :*   |\n");
		printf("==============================\n");
		printf("1. Menghitung Rata Rata Bilangan Genap \n");
		printf("2. Menghitung Bintang Angka \n");
		printf("3. Menghitung Kardus Keluar\n");
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
 				printf("Masukkan jumlah bilangan: ");
    			scanf("%d", &n);

    			for (i = 1; i <= n; i++) 
				{
        		printf("Masukkan bilangan ke-%d: ", i);
        		scanf("%d", &bilangan);

        		if (bilangan % 2 == 0) 
					{
            			jumlahGenap += bilangan;
            			banyakGenap++;
        			}
    			}

    			if (banyakGenap > 0) 
				{
        		int rataRataGenap = (int)jumlahGenap / banyakGenap;
        		printf("\nRata-rata bilangan genap adalah: %d\n", rataRataGenap);
    			} 
				else 
				{
        		printf("\nTidak ada bilangan genap yang dimasukkan.\n");
    			}
    			break;
    			
 				case 2:
 					printf("\n");
 					    
    			system("cls");
            	printf("\n");
            	printf("Masukkan jumlah baris: ");
            	scanf("%d", &n);

            	int totalSum = 0;

            	for (i = 1; i <= n; i++) 
				{
              	int rowSum = 0;

              	for (j = 1; j <= i; j++) 
				{
                printf("%d", j);
                rowSum += j;

                if (j < i) 
					{
                		printf(" + ");
                	}
              	}

              	totalSum += rowSum;
               }

                printf(" = %d\n", rowSum);
             	printf("\nJumlah keseluruhan: %d\n", totalSum);
             	break;

				
				case 3:
					printf("\n");
					
				system("cls");
                printf("Jumlah Bakwan Pak Engkus    : ");
                scanf("%d",&bakwan);
                printf("Jumlah Gehu Pak Engkus    : ");
                scanf("%d",&gehu);
                printf("Jumlah Pisang Coklat Pak Engkus    : ");
                scanf("%d",&pisang);
                dus_bakwan = bakwan/20;
                if(bakwan % 20 != 0)
				{
                    dus_bakwan =dus_bakwan+ 1;
                }
                printf("\nBanyak Kardus Bakwan	: %d\n",dus_bakwan);
                dus_gehu = gehu/15;
                if(gehu % 15 != 0)
				{
                    dus_gehu =dus_gehu+ 1;
                }
                printf("Banyak Kardus Bakwan	: %d\n",dus_gehu);
                dus_pisang = pisang/25;
                if(pisang % 25 != 0)
				{
                    dus_pisang =dus_pisang+ 1;
                }
                printf("Banyak Kardus Bakwan	: %d\n",dus_pisang);
                jumlah_dus = dus_pisang+dus_gehu+dus_bakwan;
                printf("\nTotal Kardus Yang Di Butuhlan    : %d",jumlah_dus);
                break;


				case 4:
					printf("\n");
				system ("cls");
			 	printf("Have a Nice Day :* \n");
			 
				//return 0;
				break;
		}
 	
 	}
 	while(ulang =='Y' || ulang =='y');
	//return 0;
}
 			

