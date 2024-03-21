#include <stdio.h>
 
int main(void)
{
  printf("## Program Bahasa C Deret Angka Genap ## \n");
  printf("======================================== \n\n");
 
  int jumlah_deret,i;
 
  printf("Jumlah deret yang diinginkan: ");
  scanf("%d",&jumlah_deret);
 
  for (i=1;i<=jumlah_deret;i++) 
  {
    printf("%d ",i * 2);
  }
 
  printf("\n");
 
  return 0;
}

