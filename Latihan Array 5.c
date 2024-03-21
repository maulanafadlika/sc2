#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Fungsi untuk menukar nilai antara dua variabel
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk melakukan sorting dengan metode Bubble Sort
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


int main()

{
	int n, arr[n], i, count = 0, searchNum = 5, angka[n];
	char pilihan, ulang;
	
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
		printf("1. Nilai Rata-rataDengan Array\n");
		printf("2. Nilai Genap Pada Array \n");
		printf("3. Banyak Angka 5 Pada Array\n");
		printf("4. Nilai Max & Nilai Min Dengan Array\n");
		printf("5. Keluar\n");
		
		printf("Pilihan Anda :  ");
		scanf("%d", &pilihan);
		
		switch (pilihan)
		{
			default :
				printf("Pilihan Tidak Valid! \n");
				break;
				
				case 1:
					printf("\n");
					
				int k, i, num[10];
				float summ = 0.0;	
				
 				system("cls");
 				printf("Masukkan Banyak Angka\t: ");
                scanf("%d", &k);
                printf("\n");

                for (i=1; i<=k; i++) 
				{
                    printf("Masukkan Angka ke-%d\t: ", i);
                    scanf("%d", &num[i]);
                    summ += num[i];
                }
                
                printf("\n\n");
                for (i=1; i<=k; i++)
                {
                	printf("Angka Ke %d Adalah \t: %d\n", i, num[i]);
				}
                

                float rata_rata = summ / k;
                printf("Rata-rata Nilai %d adalah: %.2f\n", k, rata_rata);
    			break;
    			
 				case 2:
 					printf("\n");
 					
 				system("cls");
   				printf("Masukkan Banyak Angka: ");
    			scanf("%d", &n);
    			
    			for (int i = 0; i < n; i++) 
					{
       					printf("Masukkan Angka ke-%d: ", i + 1);
        				scanf("%d", &arr[i]);
    				}

    				printf("\n");

    				// Melakukan sorting menggunakan Bubble Sort
    				bubbleSort(arr, n);
   					for (int i = 0; i < n; i++) 
						{
        					if (arr[i] % 2 == 0) 
							{
            					printf("Genap Array ke-%d Adalah : %d\n", i + 1, arr[i]);
        					}
    					}
				break;
				
				case 3:
					printf("\n");
					
					system("cls");
					printf("Masukkan Banyak Angka: ");
    				scanf("%d", &n);

    				for (i = 0; i < n; i++) 
						{
        					printf("Masukkan Angka ke-%d: ", i + 1);
        					scanf("%d", &arr[i]);
    					}
				    for (i = 0; i < n; i++) 
						{
        					if (arr[i] == searchNum) 
							{
            					count++;
        					}
    					}

    				printf("\n\nJumlah inputan %d ada: %d\n", searchNum, count);
					printf("Array Berisi Angka %d ada di indeks ke: ", searchNum);
   						for (i = 0; i < n; i++) 
							{
        						if (arr[i] == searchNum) 
									{
            							printf("%d, ", i);
        							}
    						}
    					printf("\n");
                break;


				case 4:
					printf("\n");
					system("cls");
					
    				printf("Masukkan Banyak Angka: ");
    				scanf("%d", &n);
    				
    				for (i = 0; i < n; i++) 
						{
       						printf("Masukkan Angka ke-%d: ", i + 1);
        					scanf("%d", &angka[i]);
    					}

    				bubbleSort(angka, n);

    				printf("\nNilai Maximumnya Adalah: %d\n", angka[n-1]);
    				printf("Nilai Minimumnya Adalah: %d\n", angka[0]);
				
				break;
				
				case 5:
					
				break;
		}
 			printf("\nIngin Melakukan Sekali Lagi? (Y/N): ");
			scanf("%c", &ulang);
 	}
 	while(ulang =='Y' || ulang =='y');
 	getch();
}
