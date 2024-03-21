#include "prc.SPK.c"


int main() 
{
    
   
    system ("CLS");
	printf("Tugas Algoritma & Pemrograman Pertemuan 11 \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	printf("\n");
	printf("Welcome,  ");
	system ("PAUSE");
	system("cls");
	
	do
	{
	
	system("CLS");
	printf("==============================\n");
	printf("|    SPK Pembagian Kelas   |\n");
	printf("==============================\n");
	printf("\n");

    printf("Masukkan Banyak Kelas: ");
    scanf("%d", &a);

    printf("Masukkan Banyak Data: ");
    scanf("%d", &b);

    b *= 2; 
    int c[b];
	
	printf("\n");
    printf("Masukkan %d pasang data:\n", b / 2);
    
    pasangData (c, b);
    
    printf("\n");
	 bagiKelas(a, b, c);
	 
	printf("\nIngin Melakukan Sekali Lagi? (Y/N): ");
	scanf(" %c", &ulang);	 
    }
    
	while (ulang == 'Y' || ulang == 'y');
    return 0;
}


