/*FRAGE 1:
Lesen Sie in ein Array aus 4 double-Komponenten die Werte von der Tastatur ein.
Ermitteln Sie, welche Komponente den kleinsten Wert hat und geben Sie den Index der Komponente
und ihren Wert auf dem Bildschirm aus.

Beispielhafte Eingabe:
4.12 2 6 5

Erwartete Ausgabe:
Kleinste Zahl: 2.0 an Index 1*/


//CODE:
#include <stdio.h>

int main() {
    double arr[4];
    int i;

    // Eingabe
    printf("Geben Sie 4 Werte ein:\n");
    for (i = 0; i < 4; i++) {
        scanf("%lf", &arr[i]);
    }

    // Minimum bestimmen
    double min = arr[0];
    int minIndex = 0;

    for (i = 1; i < 4; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    // Ausgabe
    printf("Kleinste Zahl: %.1f an Index %d\n", min, minIndex);

    return 0;
}
