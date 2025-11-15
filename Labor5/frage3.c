/*FRAGE 3:
Lesen Sie eine Zeichenkette ein und zählen Sie alle Vokale (nur a,e,i,o,u, klein und groß).
Die Eingabe hat weniger als 40 Zeichen.

Beispielhafte Eingabe:
Programmieren

Erwartete Ausgabe:
5 Vokale

Nutzen Sie nur die "stdio.h" library.*/


//CODE:
#include <stdio.h>

int main() {
    char text[40];
    int i = 0, count = 0;

    // Zeichenkette einlesen
    scanf("%39s", text);

    // Vokale zählen
    while (text[i] != '\0') {
        char c = text[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') 
        {
            count++;
        }
        i++;
    }

    // Ausgabe
    printf("%d Vokale\n", count);

    return 0;
}
