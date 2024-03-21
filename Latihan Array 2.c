#include <stdio.h>

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

int main() {
    int n;
    printf("Masukkan Banyak Angka: ");
    scanf("%d", &n);

    int arr[n];

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

    return 0;
}
