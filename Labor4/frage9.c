/*FRAGE 9:
Schreiben Sie eine Funktion celsius() mit einem ganzzahligen Argument, die als 
Rückgabe den Wert der in Fahrenheit übergebenen Temperatur in Celsius berechnet.

Beispielhafter Prüfcode:
-> printf("%dF = %.1fC", 20, celsius(20));

ERWARTETE AUSGABE:
20F = -6.7C*/

//CODE:
#include <stdio.h>
float celsius(float temperatur)
{
    return((temperatur - 32) * 5/9);
}
int main()
{
    printf("%dF = %.1fC", 20, celsius(20));
    return 0;
}
