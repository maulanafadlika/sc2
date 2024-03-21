#include <stdio.h>

int main() {
    int i, j, a;

    // Input tinggi "V"
    printf("Input Bilangan : ");
    scanf("%d", &a);

    // Loop untuk bagian atas 'V'
    for (i = 0; i < a / 2; i++) 
	{
        for (j = 0; j < i; j++) 
		{
            printf(" ");
        }
        printf("*");
        for (j = 0; j < a - 2 * i - 2; j++) 
		{
            printf(" ");
        }
        printf("*\n");
    }


    return 0;
}
