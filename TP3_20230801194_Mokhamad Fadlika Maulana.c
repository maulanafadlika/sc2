#include <stdio.h>
#include <stdlib.h>

int main()

{
	int pilihan, deret, i, hasil, a, b, JGenap, JGanjil, JKelipatan7;
	double sum, average;
	char ulang;
	
	do
	{
	
	
		system("cls");
		printf("Tugas Algoritma Pemrograman P3 \n");
		printf("===============================\n");
		printf("1. Pembuat Program \n");
		printf("2. Penjumlahan Deret \n");
		printf("3. Menampilkan Banyak Bilangan \n");
		printf("4. Rata-Rata \n");
		printf("5. Faktorial \n");
		printf("6. Keluar \n");
		
		printf("Pilihan Anda \n");
		scanf("%d", &pilihan);
		
		switch(pilihan)
		{
			default:
                printf("Pilihan tidak valid.\n");
            	break;
			case 1:
				printf("Nama  : Mokhamad Fadlika Maulana \n");
				printf("Nim   : 20230801194 \n");
				printf("Email : mfadlika@rockemail.com \n");
			break;
			
			case 2:
				printf("\n");
 
 				 printf("Masukan Angka yang diinginkan: ");
 				 scanf("%d",&deret);
 				 hasil = 0;
 				 printf ("\nHasil = ");
  				 for (i=1;i<=deret;i++) 
					{
  						hasil = hasil + i;
  						printf("%d ",i);
  						if(i != deret)
						{
  							printf(" + ");
  						}
 					}
 					printf(" = %d", hasil);
 					break;
 					
 			case 3:
 				printf("\n");
 				
 				printf("Masukan Angka Awal = ");
 				scanf (" %d", &a);
 				printf("Masukan Angka Akhir = ");
 				scanf ("%d", &b);
 				
 				printf("Bilangan Genap = ");
 				for(i=a;i<=b;i++)
 				{
 					if(i %2 ==0)
					 {
					 	printf("%d ", i);
					 	JGenap++;
					 }
				 }
 				
				printf("\n\nBilangan Ganjil = ");
 				for(i=a;i<=b;i++)
 				{
 					if(i %2 !=0)
					 {
					 	printf("%d ", i);
					 	JGanjil++;
					 }
				 }
				 
				printf("\n\nBilangan Kelipatan 7 = ");
 				for(i=a;i<=b;i++)
 				{
 					if(i %7 ==0)
					 {
					 	printf("%d ", i);
					 	JKelipatan7++;
					 }
				 }
 				 printf("\n\n Jumlah Bilangan Genap = %d ", JGenap);
 				 printf("\n\n Jumlah Bilangan Ganjil = %d ", JGanjil);
 				 printf("\n\n Jumlah Bilangan Kelipatan 7 = %d ", JKelipatan7);
 				 break;
 				 
 			case 4:	 
 				printf("\n");
 				
 				printf("Masukan Angka ");
 				scanf("%d", &a);
 				
 				for(i=1;i<=a;i++)
 				{
 					printf("Bilangan ke-%d: ", i);
 					scanf("%d", &b);
 					sum += b;
				}
 				average = sum/a;
 				printf("\n\n Rata-rata = %.2lf", average);
 				break;
 				
 			case 5:
 				
 				printf("Input angka: ");
  				scanf("%d",&a);
 
 	 			printf("%d! = ",a);
 
  				hasil = 1;
  				for(i=1; i<=a; i++) 
  					{
    					hasil = hasil * i;
 
 
    					printf("%d",i);
    					if(i != a) 
							{
      							printf (" * ");
    						}
  					}
  				printf(" = %d \n",hasil);
 				break;
 				
			case 6:
				system ("CLS");
			 	printf("Have a Nice Day :* \n");
			 
			 	//system ("PAUSE");
				return 0;
				break;
		}
		printf("\nIngin Melakukan Sekali Lagi? (Y/N): ");
		scanf(" %c", &ulang);
	} 
	while(ulang =='Y' || ulang =='y');
	return 0;
}
