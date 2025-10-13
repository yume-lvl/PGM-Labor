/*FRAGE 1:

Gegeben sei folgendes Programm:

#include <stdio.h>
int main()
{
    int i = 10;
    if (i == 20)
        printf("i ist 20. ");
        printf("Programmende\n");
    return 0;
}
    
Was wird ausgegeben? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. Es wird kein Text ausgegeben
b. Ausgabe: "Programmende"
c. Ausgabe: "i ist 20. "
d. Ausgabe: "i ist 20. Programmende"*/


//CODE:
#include <stdio.h>
int main()
{
    int i = 10;
    if (i == 20)
        printf("i ist 20. ");
        printf("Programmende\n");
    return 0;
}

//ANTWORT: b. Ausgabe: "Programmende"
