#include "prc.Sudoku.c"

int main()
{

	
	system ("CLS");
	printf("Tugas Algoritma & Pemrograman Pertemuan 11 \n");
	printf("=====================================================\n");
	printf("Nama  : Mokhamad Fadlika Maulana \n");
	printf("Nim   : 20230801194 \n");
	printf("Email : mfadlika@rockemail.com \n");
	printf("=====================================================\n");
	system("pause");
	
	system("CLS");
	printf("---------------------------\n");
	printf("\tSUDOKU GAME\n");
	printf("---------------------------\n\n");
	printf("Permainan Sudoku Ini Berbasis Matriks Yang Memiliki Ordo 4x4,\n");
	printf("Dimana Jawaban telah ditentukan didalamnya,\n");
	printf("Selamat Bermain :)\n");
	tentukan(M1);
	inisiasi(M2,M1,a);
	printf("\n");

	system("pause");
	system("CLS");
	
	do
	{
		system("CLS");
		printf("---------------------------\n");
		printf("\tSUDOKU GAME\n");
		printf("---------------------------\n\n");
		baca(M1,M2,a);
		hasil=periksa(M1,M2,a);
		if(hasil==1)
		{
			tulis(M1,M2,a);
			k=k+1;
		}
		else if(hasil == 2)
		{
			printf("Selamat Anda telah menyelesaikan dengan %d kali percobaan.\n",k);
			printf("--------------------------------------------------------\n");
		}
	}
	while(hasil==1);
	return 0;
}
