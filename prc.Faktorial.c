#include "lib.Faktorial.h"

void faktorial(int Faktorial)
{
	int angka,hasil,i;
	
 hasil = 1;
  for(i=1; i<=angka; i++) 
  {
    hasil = hasil * i;
 
 
    printf("%d",i);
    if(i != angka) 
	{
      printf (" * ");
    }
  }
  printf(" = %d \n",hasil);
}
