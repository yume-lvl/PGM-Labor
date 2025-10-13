/*FRAGE 1:

Im folgenden Abschnitt sehen Sie ein den Quelltext für ein erstes Programm. Das Programm ist lauffähig.
Starten Sie das Programm hier in Moodle, indem Sie unten den Prüfen-Button drücken.

Das Programm besteht aus drei Teilen:
-einer include-Anweisung, die für die Funktion printf() benötigt wird;
-einer Funktion mit dem Namen main; jedes C-Programm benötigt genau eine solche main-Funktion;
-einer Anweisung printf(..), die eine Zeichenkette (Kombination von mehreren Buchstaben) ausgibt.
-dabei ist die Anweisung Teil der main-Funktion. Diese Beziehung ist durch die geschweiften Klammern gegeben.

Wenn Sie das Programm auf Ihrem Rechner starten wollen, speichern Sie den folgenden Quelltext als HelloWorld.c ab.

Dann kompilieren Sie das Programm auf Ihrem Rechner.

Der Aufruf von:HelloWorld.exe, führt zum Ergebnis: Hello World. 

GEGEBEN:
#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    return 0;
}
    
ERWARTETE AUSGABE:Hello World!*/


//CODE:
#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    return 0;
}
