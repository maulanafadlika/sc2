#include <stdio.h>

int main()
{
	int subMenu;
	
	system ("CLS");
	printf("Tugas Algoritma & Pemrograman Penentu Akar Persamaan Kuadrat \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("PAUSE");
	
Awal :
	
	system ("CLS");   
    printf("=======================================\n");
    printf("Aplikasi Sorting Bubble Sort \n");
    printf("=======================================\n");

void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

  int array[100], n, i, j;
  printf("Masukkan banyak elemen: ");
  scanf("%d", &n);
  printf("Masukkan nilai: \n");
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  bubbleSort(array, n);
  printf("Hasil pengurutan sebagai berikut:\n");
  for(i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
  
subMenu  :	
	printf("\n");
	printf("=====================\n");
	printf("Pilihan Menu\n");
	printf("=====================\n");
	printf("1. Kembali Ke Awal\n");
	printf("2. Keluar Aplikasi\n");
	
	printf("\n");
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", subMenu);
	
	switch(subMenu)	
	{
	default :printf("Pilihan Menu Tidak Ada\n");
			 printf("Silahkan Coba Lagi\n");
			 printf("\n");				

			 goto subMenu;
			 break;	
	case 1 : goto Awal;
			 break;
	case 2 : system ("CLS");
			 printf("Have a Nice Day :* \n");
			 
			 system ("PAUSE");
			 return 0;

	getch ();
	}
  
}
 
