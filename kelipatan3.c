/*
	Nama	: Mokhamad Fadlika Maulana
	Nim		: 20230801194
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cekBilangan,cekKelipatan3;
	printf("===========================================\n");
	printf("Aplikasi Pengecek Kelipatan Tiga\n");
	printf("===========================================\n");
	
	printf("Masukkan Bilangan : ");
	scanf("%d", &cekBilangan);
	
	cekKelipatan3 = cekBilangan % 3;
	if (cekKelipatan3 == 0)
	{
		printf ("Bilangan Merupakan Kelipatan tiga \n");
	}
	else
	{
		printf ("Bilangan bukan merupakan kelipatan tiga \n");
	}
}
