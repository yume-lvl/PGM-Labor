/*FRAGE 5:
Schreiben Sie ein Programm, welches drei Ganzzahlen einliest und in umgekehrter Reihenfolge wieder formatiert ausgibt.

GEGEBEN:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    return 0;
}

EINGABE:
32 64 128

ERWARTETE AUSGABE:
Zahl 3:  128
Zahl 2:   64
Zahl 1:   32*/


//CODE:
#include <stdio.h>
int main()
{
    int Zahl1;
    int Zahl2;
    int Zahl3;

    scanf("%d %d %d", &Zahl1, &Zahl2, &Zahl3);

    printf("Zahl 3: %5d\n", Zahl3);
    printf("Zahl 2: %5d\n", Zahl2);
    printf("Zahl 1: %5d\n", Zahl1);

    return 0;
}
