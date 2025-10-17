/*FRAGE 5:

Berechnen Sie den BMI für die eingegebenen Daten.
-Eingabe 1: Gewicht in Gramm
-Eingabe 2: Größe in Zentimeter

Hinweis: Körpergewicht (in kg) geteilt durch Größe (in m) zum Quadrat.

BEISPIELHAFTE EINGABE MIT GEWICHT IN GRAMM UND GRÖßE IN ZENTIMETER:
85000 150

ERWARTETE AUSGABE:
Der BMI liegt bei: 37.78!*/


//CODE:
#include <stdio.h>
int main()
{
    //Deklaration von Variablen
    double gewicht_g; //Körpergewicht in g
    double gewicht_kg; //Körpergewicht in kg
    double groesse_cm; //Größe in cm
    double groesse_m; //Größe in m
    double bmi; //Berechnet BMI

    //Eingabe
    scanf("%lf %lf", &gewicht_g, &groesse_cm);

    //Umrechnung
    gewicht_kg = gewicht_g / 1000.0;
    groesse_m = groesse_cm / 100.0;
    bmi = gewicht_kg / (groesse_m * groesse_m);

    //Ausgabe
    printf("Der BMI liegt bei: %.2f!\n", bmi);

    return 0;
}
