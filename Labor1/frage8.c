/*FRAGE 8: 
Deklarieren Sie vier Variablen der in passenden ganzzahligen(!) Datentypen und geben Sie deren belegte Speichergröße aus. 
Die Speichergröße soll zur Programmlaufzeit ermittelt werden.

GEGEBEN: 
#include <stdio.h>

int main() 
{
    // Variablen vom passenden Datentyp anlegen
    ... // 8 bit Variable
    ... // 16 Bit Variable
    ... // 32 Bit Variable
    ... // 64 Bit Variable
    
    // Belegten Speicher ausgeben
    printf("Datentyp ... hat ... ", ...);
    printf...
    ...
    
    return 0;
}*/


//CODE: 
#include <stdio.h>
int main()
{
    char var8;
    short var16;
    int var32;
    long long var64;

    printf("Datentyp char hat %zu Byte\n", sizeof(var8));
    printf("Datentyp short hat %zu Byte\n", sizeof(var16));
    printf("Datentyp int hat %zu Byte\n", sizeof(var32));
    printf("Datentyp long long hat %zu Byte\n", sizeof(var64));

    return 0;
}
