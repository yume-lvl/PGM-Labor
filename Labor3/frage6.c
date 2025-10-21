/*FRAGE 6:
Erstellen Sie ein Programm, das Sterne, also char '*' auf der Konsole ausgibt. 
Die Anzahl der Sterne soll durch eine Eingabe vorgegeben werden können.

Bei der Zahl 5 sollen als Ergebnis fünf Sterne: ***** ausgegeben werden.*/


//CODE:
#include <stdio.h>
int main()
{
    int eingabe;
    char star = '*';

    scanf("%i", &eingabe);

    for(int i = 0; i < eingabe; i++){
        printf("%c", star);
    }

    return 0;
}
