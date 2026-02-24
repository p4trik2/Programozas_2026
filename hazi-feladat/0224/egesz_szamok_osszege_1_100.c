#include <stdio.h>

int main () {
    int osszeg = 0;
    for(int i = 1; i<=100; i++) {
        osszeg += i;
    }

    printf("A szamok ossze 1-tol 100-ig: %d", osszeg);

    return 0;
}
