/*FRAGE 8:
Schreiben Sie eine Funktion bmi() mit zwei ganzzahligen Argumenten - dem Gewicht (in Kilogramm) 
und der Körpergröße (in Zentimeter), die als Rückgabe den resultierenden BMI berechnet.

Beispielhafter Prüfcode:
-> printf("%dkg und %fm = %.2lf", 85, 1.5, bmi(85, 150));

ERWARTETE AUSGABE:
85kg und 1.500000m = 37.78*/

//CODE:
#include <stdio.h>
float bmi(float gewicht, float groesse)
{
    return(gewicht * 1 / (groesse * groesse)*10000);
}
int main()
{
    printf("%dKg und %fm = %.2lf", 85, 1.5, bmi(85, 150));
    return 0;
}
