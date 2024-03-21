/*
	Nama	: Mokhamad Fadlika Maulana
	Nim		: 20230801194
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int cekBilangan, cekKelipatan5, cekGanjil;
	printf("===========================================\n");
	printf("Aplikasi Pengecek Kelipatan Lima & ganjil\n");
	printf("===========================================\n");
	
	printf("Masukkan Bilangan : ");
	scanf("%d", &cekBilangan);
	
	cekGanjil = cekBilangan % 2;
	cekKelipatan5 = cekBilangan % 5;
	
	// Disini itu kelipatan 5
	if (cekKelipatan5 == 0)
	{
		if (cekGanjil == 0)
		{
			printf("Tidak Ganjil & Kelipatan 5 \n");
		}
		else if (cekGanjil == 1)
		{
			printf("Ganjil & Kelipatan 5 \n");
		}
	}
	// Kalo Disini itu bukan kelipatan 5
	else
	{
		if (cekGanjil == 0)
		{
			printf("Tidak Ganjil & Tidak Kelipatan 5 \n");
		}
		else if (cekGanjil == 1)
		{
			printf("Ganjil & Tidak Kelipatan 5 \n");
		}
	}
	getch();
	return 0;
}
