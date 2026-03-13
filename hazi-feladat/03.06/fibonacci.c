#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;

    int a = 0;
    int b = 1;
    int c;

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    printf("Az elso 100 Fibonacci szam:\n\n");
    
    
    for (int i = 1; i <= 100; i++) {
        printf("%d. elem: %d\n", i, fibonacci(i));
    }

    return 0;
}