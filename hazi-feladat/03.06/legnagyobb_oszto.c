#include <stdio.h>

int legnagyobb_oszto(int n) {
    if (n <= 1) {
        return 0;
    }

    // A szám felétől indulunk visszafelé
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            return i; 
        }
    }
    
    return 1;
}

int main() {
    printf("Az elso 50 szam legnagyobb osztoja (onmagat kiveve):\n\n");
    

    for (int i = 1; i <= 50; i++) {
        printf("%d legnagyobb osztoja: %d\n", i, legnagyobb_oszto(i));
    }

    return 0;
}