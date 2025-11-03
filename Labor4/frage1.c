/*FRAGE 1:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int add(int a, int b) {
    int c = a + b;
    return 0;
}
int main() {
    printf("Resultat: %d", add(19, 2,8) );
    return 0;
}

/*Was kommt heraus? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. Programm startet nicht wg. Compilerfehler
b. Resultat: 21
c. Resultat: 22
d. Programm stürzt ab
e. Resultat: 42

ANTWORT: a. Programm startet nicht wg. Compilerfehler*/
