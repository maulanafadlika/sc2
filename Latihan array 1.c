#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() 
{
	int k, i, num[10];
	float summ = 0.0;

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
	getch();
}
