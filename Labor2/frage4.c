/*FRAGE 4:

Unter Verwendung der Formel: Grad Celsius = (5 * (Grad Fahrenheit - 32))/9. 
soll ein Wert von Fahrenheit in Celsius umgewandelt werden:

Bei der Eingabe von 20.5 Grad Fahrenheit soll

EINGABE:
20.5

FOLGENDE AUSGABE ERSCHEINEN:
20.5 Grad Fahrenheit = -6.4 Grad Celsius 

GEGEBEN:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Hello World!\n")
    return 0;
}*/


//CODE:
#include <stdio.h>
int main()
{
    float fahrenheit, celsius;

    //Eingabe
    scanf("%f", &fahrenheit);

    //Umrechnung
    celsius = (5 * (fahrenheit - 32))/9;

    //Ausgabe
    printf("%.1f Grad Fahrenheit = %.1f Grad Celsius", fahrenheit, celsius);

    return 0;
}
