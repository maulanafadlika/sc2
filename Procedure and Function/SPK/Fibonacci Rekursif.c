#include <stdio.h>

// Fungsi rekursif untuk menghitung bilangan Fibonacci ke-n
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    printf("==============================\n");
    printf("FIBONACI\n");
    printf("==============================\n");

    printf("Masukan Nilai n : ");
    scanf("%d", &n);

    int fib_n = fibonacci(n);

    printf("\nBilangan Fibonacci ke %d adalah %d\n", n, fib_n);
    
    return 0;
}

