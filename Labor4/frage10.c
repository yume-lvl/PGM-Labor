/*FRAGE 10:
Schreiben Sie eine Funktion prime() mit einem ganzzahligen Argument, die zurückgibt, ob 
die übergebene Zahl eine Primzahl ist oder nicht.

Im Fall einer Primzahl soll 1 zurückgegeben werden, ansonsten 0.

Beispielhafter Prüfcode:
-> printf(prime(85) ? "Primzahl" : "KEINE Primzahl");

ERWARTETE AUSGABE:
KEINE Primzahl*/

//CODE:
#include <stdio.h>
int prime(int zahl)
{
    if(zahl == 1) return 0;
    for(int i = 2; i < zahl; i++){
        if((zahl % i) == 0) return 0;
    }

    return 1;
}
int main()
{
    printf(prime(85) ? "Primzahl" : "KEINE Primzahl");
    return 0;
}
