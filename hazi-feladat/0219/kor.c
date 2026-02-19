#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main () {
    int r = 0;
    printf("Adja meg a kor sugarat (cm): ");
    scanf("%d", &r);

    int kerulet = 2 * r * M_PI;

    printf("A kor kerulete: %d \n", kerulet);

    int terulet = pow(r, 2) * M_PI;
    printf("A kor terulete: %d", terulet);
    return 0;
}