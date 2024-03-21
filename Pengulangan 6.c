#include <stdio.h>

int main()

{
	int angka = 1;
	int i;
	for(i=1;i<=5;++i)
	{
		printf("%d", angka);		
		if (i<5) 
		{
			printf("*");
		}
		angka++;
	}
	
	printf("\n");
	
	return 0;
}
