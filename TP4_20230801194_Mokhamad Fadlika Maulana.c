#include <stdio.h>
#include <stdlib.h>

void notif()
{
	printf("Clear Code atau Keluar (Y/N): ");
}

int main() 
{
	
	int j, n, i, subMenu;
	char subMenu1;

	system("cls");
	printf("Tugas Algoritma & Pemrograman Pertemuan 4 \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("pause");

do {		
Clear:
	system("cls");   
    printf("===========================================\n");
  	printf("## Program Bahasa C Menggambar Huruf V ## \n");
  	printf("=========================================== \n\n");
    printf("Masukkan jumlah baris : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf(" *");
        } 
        for (j = 1; j <= 2 * (n - i); j++) 
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf(" *");
        }
        printf("\n");
    } 

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("  ");
        }
        for (j = 0; j <= 2 * (n - i); j++) 
        {
            printf(" *");
        }
        printf("\n");
    }
subMenu:
	
	notif ();
	fflush(stdin);
	
	char subMenu1;
	char b;
	b = scanf("%c", &subMenu1);
	
	if (b != 1 || getchar() != '\n' || subMenu1 != 'y' && subMenu1 != 'n' && subMenu1 != 'Y' && subMenu1 != 'N' )
	{
		printf("\n");
		printf("Input Tidak Valid. Silahkan Masukkan Huruf Antara y dan n\n");
		fflush(stdin);
		printf("Tekan Enter Untuk Lanjut");
		getchar();
		goto subMenu;
	}
	
switch(subMenu1)	
	{	
	case 'y': goto Clear;
			  break;
	case 'n': return 0;
			  break;
	case 'Y': goto Clear;
			  break;
	case 'N': return 0;
			  break;
	}
	
} while (subMenu1 == 'n');

}

