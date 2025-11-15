/*FRAGE 4:
Ersetzen Sie in einer eingegebenen Zeichenkette jeden Vokal mit einem zusätzlich eingegebenen Buchstaben.
Die maximale Länge der Zeichenkette beträgt 40 Zeichen.

Beispielhafte Eingabe:
w Programmieren

Erwartete Ausgabe:
Prwgrwmmwwrwn

Verwenden Sie zum Einlesen die Zeile:
scanf(" %c %s", &vowel, str);

Nutzen Sie nur die "stdio.h" library.*/


//CODE:
#include <stdio.h>

int main() {
    char vowel;
    char str[40];
    int i = 0;

    // Eingabe: zuerst Zeichen, dann String
    scanf(" %c %39s", &vowel, str);

    // Jeden Vokal ersetzen
    while (str[i] != '\0') {
        char c = str[i];

        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') 
        {
            str[i] = vowel;
        }

        i++;
    }

    // Ausgabe
    printf("%s\n", str);

    return 0;
}
