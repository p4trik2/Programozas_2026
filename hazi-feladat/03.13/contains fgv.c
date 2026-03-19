#include <stdio.h>

int contains(int tomb[], int meret, int keresett_szam) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == keresett_szam) {
            return 1; 
        }
    }

    return 0;
}

int main() {
    int adatok[] = {10, 25, 4, 88, 13};
    int n = 5;
    int mit_keresunk = 88;

    int van_benne = contains(adatok, n, mit_keresunk);

    if (van_benne == 1) {
        printf("A(z) %d szerepel a tombben!\n", mit_keresunk);
    } else {
        printf("A(z) %d NINCS a tombben.\n", mit_keresunk);
    }

    return 0;
}