/*FRAGE 7:
Schreiben Sie eine Funktion triangleArea(), die den Flächeninhalt eines Dreiecks berechnet.
Die Funktion bekommt als Parameter die Grundseite und die dazugehörige Höhe.

Beispielhafter Prüfcode:
-> printf("%.2f", triangleArea(3, 4));

ERWARTETE AUSGABE:
6.00*/

//CODE:
#include <stdio.h>
float triangleArea(float g, float h)
{
    return g * h * 1/2;
}
int main()
{
    printf("%.2f", triangleArea(3, 4));

    return 0;
}
