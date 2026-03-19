#include <stdio.h>


int fuggveny_rendezett_e(int tomb[], int meret) {
    if (meret < 2) {
        return 1;
    }

    for (int i = 0; i < meret - 1; i++) {
        if (tomb[i] > tomb[i + 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int szamok[5] = {10, 20, 30, 40, 50};
    int meret = 5;

    int eredmeny = fuggveny_rendezett_e(szamok, meret);

    printf("A tomb elemei: ");
    for (int i = 0; i < meret; i++) {
        printf("%d ", szamok[i]);
    }
    
    if (eredmeny == 1) {
        printf("\nAz eredmeny: A tomb rendezett.\n");
    } else {
        printf("\nAz eredmeny: A tomb NEM rendezett.\n");
    }

    return 0;
}