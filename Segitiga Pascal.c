#include <stdio.h>

int main()
{
    int motor;
    
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &motor);

    for (int i=1;i<=motor;i++)
	{
    	for (int j=1;j<=i;j++)
		{
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
