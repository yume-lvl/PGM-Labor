/*FRAGE 7:
Kehren Sie eine eingegebene Zeichenkette um und geben diese aus.

Beispielhafte Eingabe:
Programmieren

Erwartete Ausgabe
nereimmargorP

Nutzen Sie nur die "stdio.h" library.*/


//CODE:
#include <stdio.h>

int main() {
    char str[40];
    int length = 0;

    // Eingabe
    scanf("%39s", str);

    // Länge bestimmen
    while (str[length] != '\0') {
        length++;
    }

    // Rückwärts ausgeben
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}
