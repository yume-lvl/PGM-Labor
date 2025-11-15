/*FRAGE 5:
Ersetzen Sie in einer eingegebenen Zeichenkette jeden Großbuchstaben mit dem entsprechenden Kleinbuchstaben und umgekehrt.
Bei Zeichen, die keine Buchstaben (a-z, A-Z) sind, wird nichts verändert.
Die maximale Länge der Zeichenkette beträgt 40 Zeichen.

Beispielhafte Eingabe:
Programmieren

Erwartete Ausgabe:
pROGRAMMIEREN

Nutzen Sie nur die "stdio.h" library.*/


//CODE:
#include <stdio.h>

int main() {
    char str[40];
    int i = 0;

    // Zeichenkette einlesen
    scanf("%39s", str);

    // Buchstaben umwandeln
    while (str[i] != '\0') {
        char c = str[i];

        // Groß -> klein
        if (c >= 'A' && c <= 'Z') {
            str[i] = c + ('a' - 'A');
        }
        // Klein -> groß
        else if (c >= 'a' && c <= 'z') {
            str[i] = c - ('a' - 'A');
        }

        i++;
    }

    // Ausgabe
    printf("%s\n", str);

    return 0;
}
