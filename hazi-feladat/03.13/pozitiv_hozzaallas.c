#include <stdio.h>

void tomb_kiir(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        printf("%d", tomb[i]);
        if (i < meret - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void mindent_pozitivva(int tomb[], int meret) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] < 0) {
            tomb[i] = -tomb[i];
        }
    }
}

int main() {
    int adatok[] = {-5, 12, 0, -8, -1, 20};
    int n = 6;

    printf("Eredeti tomb: ");
    tomb_kiir(adatok, n);

    mindent_pozitivva(adatok, n);

    printf("Modositott tomb: ");
    tomb_kiir(adatok, n);

    return 0;
}