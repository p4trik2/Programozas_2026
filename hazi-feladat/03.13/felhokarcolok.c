#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A függvény, ami kiszámolja a különbségek összegét
// Most már karaktertömböt (szöveget) vár, mert így könnyebb kezelni a 309 jegyet
int felhokarcolo_szamolo(char szam_szoveg[]) {
    int osszeg = 0;
    int hossz = strlen(szam_szoveg);

    for (int i = 0; i < hossz - 1; i++) {
        // A karakterből számot csinálunk: '5' - '0' = 5
        int h1 = szam_szoveg[i] - '0';
        int h2 = szam_szoveg[i+1] - '0';

        int kulonbseg = h1 - h2;
        if (kulonbseg < 0) {
            kulonbseg = -kulonbseg;
        }
        osszeg += kulonbseg;
    }
    return osszeg;
}

int main() {
    // A 2^1024 pontos értéke szövegként (309 számjegy)
    char ketto_az_ezernyolcvannyolcadikon[] = 
        "179769313486231590772930519078902473361797697894230657273430081157732675"
        "805500963132708477322407536021120113879871393357658789768814416622492847"
        "430639474124377767893424865485276302219601246094119453082952085005768838"
        "150682342462881473913110540827237163350510684586298239947245938479716304"
        "835356329624224137216";

    int eredmeny = felhokarcolo_szamolo(ketto_az_ezernyolcvannyolcadikon);

    printf("A 2^1024 szamjegyeibol allo felhokarcolok kulonbseg-osszege: %d\n", eredmeny);

    return 0;
}