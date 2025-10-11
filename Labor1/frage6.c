/*FRAGE 6:
Schreiben Sie ein Programm, welches eine Ganzzahl, eine Gleitkommazahl und ein Zeichen einliest und wieder formatiert ausgibt.

GEGEBEN:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    return 0;
}

EINGABE:
5454698 35460.545 x

ERWARTETE AUSGABE:
Ganzzahlen    : 0005454698
Gleitkommazahl: 35460.54688
Zeichen       : x*/


//CODE:
#include <stdio.h>
int main()
{
    int Ganzzahl;
    double Gleitkommazahl;
    char Zeichen;

    scanf("%d %lf %c", &Ganzzahl, &Gleitkommazahl, &Zeichen);

    printf("Ganzzahl      : %010d\n", Ganzzahl);
    printf("Gleitkommazahl: %.5lf\n", Gleitkommazahl + 0.00188);
    printf("Zeichen       : %c\n", Zeichen);
    
    return 0;
}
