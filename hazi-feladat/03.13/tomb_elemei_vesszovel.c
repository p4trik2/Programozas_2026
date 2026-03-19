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

int main() {
    int pelda_tomb[] = {4, 7, 34, 23, 67};
    int n = 5;

    tomb_kiir(pelda_tomb, n);

    return 0;
}