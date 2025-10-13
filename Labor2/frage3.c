/*FRAGE 3:

Im folgenden Abschnitt sehen Sie ein Programm. Das Programm ist nicht lauffähig. 
Fügen Sie einige Zeilen Code mit scanf ein, so dass bei den entsprechenden Eingaben folgende Ausgabe entsteht.

GEGEBEN:
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i1, i2, i3;
    // noch ein Beispiel mit scanf
    scanf("%d %d %d", &i1, &i2, &i3);
    printf("Ganze Zahlen: %d, %d, %d \n", i1, i2, i3);

    float f;
    // Ihr Code hier
    printf("Fliesskommazahl mit Formatangabe: %.2f \n", f);

    char s[100];
    // Ihr Code hier
    printf("Zeichenkette: %s \n", s);
    return 0;
}

EINGABE:
1 2 3 
42.1356 
Esslingen

ERWARTETE AUSGABE:
Ganze Zahlen: 1, 2, 3 
Fliesskommazahl mit Formatangabe: 42.14 
Zeichenkette: Esslingen*/


//CODE:
#include <stdio.h>
int main()
{
    int i1, i2, i3;
    scanf("%d %d %d", &i1, &i2, &i3); //Variante 1
    /*Variante 2:
    scanf("%d", &i1);
    scanf("%d", &i2);
    scanf("%d", &i3);*/
    printf("Ganze Zahlen: %d, %d, %d\n", i1, i2, i3);

    float f;
    scanf("%f", &f);
    printf("Fliesskommazahl mit Formatangabe: %.2f\n", f);

    char s[100];
    scanf("%s", s);
    printf("Zeichenkette: %s\n", s);

    return 0;
}
