/*FRAGE 8:
Berechnen Sie den Notendurchschnitt.
Dazu bekommen Sie mehrere Zahlen.
Lesen Sie die Zahlen ein bis Sie max. 10 Noten bekommen haben.
Beenden Sie das Einlesen, wenn Sie eine ungültige Note (< 1.0 oder > 6.0) erhalten.

Beispielhafte Eingabe:
1 2 3 4 0

Erwartete Ausgabe:
Durchschnitt (N=4): 2.50*/


//CODE:
#include <stdio.h>

int main() {
    double note;
    double sum = 0.0;
    int count = 0;

    // Maximal 10 Noten einlesen
    while (count < 10) {
        scanf("%lf", &note);

        // Abbruch bei ungültiger Note
        if (note < 1.0 || note > 6.0) {
            break;
        }

        sum += note;
        count++;
    }

    // Ausgabe
    if (count > 0) {
        printf("Durchschnitt (N=%d): %.2f\n", count, sum / count);
    } else {
        printf("Keine gueltigen Noten eingegeben.\n");
    }

    return 0;
}
