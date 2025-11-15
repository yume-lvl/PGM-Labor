/*FRAGE 6:
Lesen Sie eine Zeichenkette ein und geben Sie einen Teil davon aus.
Der Teil wird durch zwei Indizes (von/bis, jew. einschl.) definiert.
Die maximale Länge der Zeichenkette beträgt 40 Zeichen.

Beispielhafte Eingabe (Zeichenkette, Startindex, Endindex):
Programmieren 3 7

Erwartete Ausgabe:
Programmieren 3-7: gramm

Tipp: Vergessen Sie nicht, dass in C Zeichenketten mit einer Null abgeschlossen werden.
Nutzen Sie nur die "stdio.h" library.*/


//CODE:
#include <stdio.h>

int main() {
    char str[40];
    int start, end;
    int i, j = 0;
    char teil[40];

    // Eingabe: Zeichenkette + zwei Indizes
    scanf("%39s %d %d", str, &start, &end);

    // Teilstring herauskopieren
    for (i = start; i <= end && str[i] != '\0'; i++) {
        teil[j] = str[i];
        j++;
    }
    teil[j] = '\0';  // String beenden!

    // Ausgabe
    printf("%s %d-%d: %s\n", str, start, end, teil);

    return 0;
}
