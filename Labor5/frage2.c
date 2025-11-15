/*FRAGE 2:
Lesen Sie eine Zeichenkette ein und zählen Sie alle Kleinbuchstaben (nur a-z).
Die Eingabe hat weniger als 40 Zeichen.

Beispielhafte Eingabe:
Programmieren

Erwartete Ausgabe:
12 Kleinbuchstaben

Nutzen Sie nur die "stdio.h" library.*/


//CODE:
#include <stdio.h>

int main() {
    char text[40];
    int i = 0, count = 0;

    // Zeichenkette einlesen
    scanf("%39s", text);

    // Kleinbuchstaben zählen
    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            count++;
        }
        i++;
    }

    // Ausgabe
    printf("%d Kleinbuchstaben\n", count);

    return 0;
}
