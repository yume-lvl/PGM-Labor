/*FRAGE 3:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        continue;
        printf("i: %d\n", i);
    }
    return 0;
}

/*Welcher Ablauf findet in der Schleife statt? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. continue überspringt den Rest des aktuellen Durchlaufs und macht mit der nächsten Iteration weiter.
b. continue beendet die Schleife sofort.
c. continue setzt das Programm nach der Schleife fort, ohne weitere Iterationen.
d. continue funktioniert wie break.
e. continue springt zum Anfang des Programms.

ANTWORT: a. continue überspringt den Rest des aktuellen Durchlaufs und macht mit der nächsten Iteration weiter.*/
