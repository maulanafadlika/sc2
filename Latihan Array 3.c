#include <stdio.h>

// Fungsi untuk melakukan pengurutan array dengan metode bubble sort
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
    int n, i, count = 0;
    printf("Masukkan Banyak Angka: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) 
	{
        printf("Masukkan Angka ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Angka yang ingin dicari
    int searchNum = 5;

    // Mencari berapa kali angka tertentu muncul di dalam array
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

    return 0;
}


