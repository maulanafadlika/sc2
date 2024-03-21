/*-------------------------------*/
/*program menghitung luas segitiga*/
/*--------------------------------*/

#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
float luas;
printf("\t\nAPLIKASI PENGHITUNG LUAS SEGITIGA");
printf("\n\nmasukan alas(m)= ");
scanf("%d",&a);
printf("\nmasukan tinggi(m)= ");
scanf("%d",&b);
luas=0.5*(a*b);
printf("\nluas segitiga(m)= %f",luas);
getche();
}
