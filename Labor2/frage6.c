/*FRAGE 6:

Berechnen Sie den BMI für die eingegebenen Daten.
-Eingabe 1: Gewicht in Gramm
-Eingabe 2: Größe in Zentimeter

Hinweis: Körpergewicht (in kg) geteilt durch Größe (in m) zum Quadrat.

BEISPIELHAFTE EINGABE MIT GEWICHT IN GRAMM UND GRÖßE IN ZENTIMETER:
82400 184

Dieses Mal soll aber eine Bewertung als Text ausgegeben werden:
BMI	                   Ausgabe
bmi < 18.5	           Untergewicht bmi-Wert
18.5 <= bmi <= 24.9	   Normalgewicht bmi-Wert
bmi > 24.9	           Uebergewicht bmi-Wert

BEI DEN WERTEN VON OBEN SOLLTE DIE AUSGABE: Normalgewicht 24.3 ERGEBEN*/


//CODE:
#include <stdio.h>
int main()
{
    //Deklaration von Variablen
    double gewicht_g; //Körpergewicht in g
    double gewicht_kg;  //Körpergewicht in kg
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
    if(bmi < 18.5) {
        printf("Untergewicht %.1f\n", bmi);
    }
    else if(bmi >= 18.5 && bmi <= 24.9) {
        printf("Normalgewicht %.1f\n", bmi);
    }
    else {
        printf("Ubergewicht %.1f\n", bmi);
    }

    return 0;
}
