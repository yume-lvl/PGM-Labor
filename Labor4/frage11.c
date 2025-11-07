/*FRAGE 11:
Das Programm berechnet die Potenz einer Zahl in der main Funktion.
Sie wollen diese Berechnung wiederverwendbar machen.

Lagern Sie die Berechnung sowie die Ausgabe der Berechnung wie folgt aus:
- double power(double basis, int exponent); // Berechnet die Potenz
- void ausgabe(double basis, int exponent, double ergebnis); // Gibt die ganze Berechnung aus

GEGEBEN:
#include <stdio.h>

double basis = 0.0;
int exponent = 0.0;
double ergebnis = 0.0;

int main()
{
    // Eingabe
    printf("Bitte basis eingeben: ");
    scanf("%lf", &basis);
    printf("Bitte exponent eingeben: ");
    scanf("%d", &exponent);

    // Berechnung
    ergebnis = 1.0;
    int i = 0;
    for (i = 0; i < exponent; i++)
    {
        ergebnis *= basis;
    }

    // Ausgabe2
    printf("%.1lf ^ %d = %.1lf", basis, exponent, ergebnis);

    return 0;
}

Beispielhafte Eingabe:
2 8 

ERWARTETE AUSGABE:
2 ^ 8 = 256*/

//CODE:
#include <stdio.h>
//Funktion zur Berechung der Potenz
double power(double basis, int exponent){
double ergebnis = 1.0;
for(int i = 0; i < exponent; i++){
ergebnis *= basis;
}
return ergebnis;
}

//Frnktion zur Ausgabe der Potenz
void ausgabe(double basis, int exponent, double ergebnis){
    printf("%.1lf ^ %d = %.1lf", basis, exponent, ergebnis);
}

int main()
{
    double basis = 0.0;
    int exponent = 0.0;
    double ergebnis = 0.0;

    //Eingabe
    printf("Bitte basis eingeben: ");
    scanf("%lf", &basis);
    printf("Bitte exponent eingeben: ");
    scanf("%d", &exponent);

    //Berechnung
    ergebnis = power(basis, exponent);

    //Ausgabe
    ausgabe(basis, exponent, ergebnis);

    return 0;
}
