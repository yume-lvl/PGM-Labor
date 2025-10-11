/*FRAGE 4:
Im folgenden Abschnitt sehen Sie ein Programm. Das Programm ist nicht lauffähig.
Verändern Sie die Ausgabe mit printf-Formatieren so, dass folgende Ausgabe entsteht.

GEGEBEN:
#include <stdio.h>
int main()
{
    printf("String: XX \n", "Das ist eine Zeichenkette");
    printf("Ganze Zahl: XX \n", 42);
    printf("Fliesskommazahl: XX \n", 3.1415);
    printf("Fliesskommazahl mit Formatangabe: XX \n", 3.1415);
    return 0;
}
    
ERWARTETE AUSGABE:
String: Das ist eine Zeichenkette 
Ganze Zahl: 42 
Fliesskommazahl: 3.141500 
Fliesskommazahl mit Formatangabe: 00003.14 */


//CODE:
#include <stdio.h>
int main()
{
    printf("String: %s\n", "Das ist eine Zeichenkette");
    printf("Ganze Zahl: %d\n", 42);
    printf("Fliesskommazahl: %f\n", 3.1415);
    printf("Fliesskommazahl mit Formatausgabe: %08.2f\n", 3.1415);
    return 0;
}
