#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n, i;
    printf("Masukkan Banyak Angka: ");
    scanf("%d", &n);

    int angka[n];
    for (i = 0; i < n; i++) 
	{
        printf("Masukkan Angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    bubbleSort(angka, n);

    printf("\nNilai Maximumnya Adalah: %d\n", angka[n-1]);
    printf("Nilai Minimumnya Adalah: %d\n", angka[0]);

    return 0;
}

