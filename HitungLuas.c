#include <stdio.h>
#include <lib.HitungLuas.h>
#include <prc.HitungLuas.h>

void main()
{
	int panjang, lebar, luas;
	printf("Masukan Panjang, Lebar : ");
	scanf("%d" "%d", &panjang, &lebar);
	
	luas = LuasPersegi (panjang,lebar);
	
	printf("Luasnya adalah %d", luas);
	getch();
	
}
