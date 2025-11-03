/*FRAGE 6:
Schreiben Sie eine Funktion stringlength(), die eine Zeichenkette als Parameter 
übernimmt und die Länge der Zeichenkette zurückgibt.

Nutzen Sie dabei wieder nur die "stdio.h" library.

Um die Funktion stringlength() zu testen kann folgender Prüfcode verwendet werden:
-> char test[] = "Hochschule Esslingen";
-> printf("%s hat %d Zeichen", test, stringlength(test));

ERWARTETE AUSGABE:
Hochschule Esslingen hat 20 Zeichen*/

//CODE:
#include <stdio.h>
int stringlength(char test[])
{
    int i = 0;
    while(test[i] != '\0'){
        i++;
    }

    return i;
}
int main()
{
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));

    return 0;
}
