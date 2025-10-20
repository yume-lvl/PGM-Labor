/*FRAGE 1:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int main() 
{
    unsigned int counter = 0;
    for(;;)
    {
    	counter++;
    }
    printf("result: %d\n", counter);
    return 0;
}

/*Was wird passieren heraus? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. Programm wird nie beendet (Endlosschleife)
b. Ausgabe "result: 0"
c. Ausgabe "result: 1"
d. Programm startet nicht wg. Compilerfehler
e. Ausgabe "result: 4294967295"
f. Programm stürzt ab

ANTWORT: a. Programm wird nie beendet (Endlosschleife)*/
