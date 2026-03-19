#include <stdio.h>

int legkisebb_elem(int tomb[], int meret) {
    int min = tomb[0];

    for (int i = 1; i < meret; i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }

    return min;
}

int main() {
    int szamok[] = {12, 5, 8, 3, 19, 7};
    int n = 6;

    int minimum = legkisebb_elem(szamok, n);
    printf("A legkisebb elem: %d\n", minimum);

    return 0;
}