/*FRAGE 7:
Schreiben Sie ein Programm, welches zwei Ganzzahlen einliest und diese in hexadezimaler Darstellung ausgibt.
Dabei soll für die erste Zahl Kleinbuchstaben und für die zweite Zahl Großbuchstaben verwendet werden.

GEGEBEN:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    return 0;
}

EINGBE:
43707 52445

ERWARTETE AUSGABE:
1. Zahl: 0xaabb
2. Zahl: 0xCCDD*/

//CODE:
#include <stdio.h>
int main()
{
    int zahl1;
    int zahl2;

    scanf("%d %d", &zahl1, &zahl2);

    printf("1. Zahl: 0x%x\n", zahl1); //Kleinbuchstaben
    printf("2. Zahl: 0x%X\n", zahl2); //Großbuchstaben

    return 0;
}
