#include <stdio.h>

int index_kereso(int tomb[], int meret, int keresett_szam) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == keresett_szam) {
            return i;
        }
    }

    return -1;
}

int main() {
    int adatok[] = {10, 25, 4, 88, 13};
    int n = 5;
    int mit_keresunk = 88;

    int pozicio = index_kereso(adatok, n, mit_keresunk);

    if (pozicio != -1) {
        printf("A(z) %d szam a(z) %d. indexen van.\n", mit_keresunk, pozicio);
    } else {
        printf("A(z) %d szam nem szerepel a tombben.\n", mit_keresunk);
    }

    return 0;
}