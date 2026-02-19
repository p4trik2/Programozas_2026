#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Adja meg a téglalap 'a' oldalanak hosszat (cm): ");
    scanf("%d", &a);

    printf("Adja meg a téglalap 'b' oldalanak hosszat (cm): ");
    scanf("%d", &b);

    int kerulet = 2 * (a + b);
    int terulet = a * b;

    printf("A teglalap kerulete: %d \n", kerulet);
    printf("A teglalap terulete: %d ", terulet);

    return 0;
}
