/*FRAGE 2:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int add(int a, int b) {
    int c = a + b;
    return c;
}
int main() {
    printf("Resultat: %d\n", add(19, 2.8));
    return 0;
}

/*Was kommt heraus? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. Programm startet nicht wg. Compilerfehler
b. Resultat: 22
c. Programm stürzt ab
d. Resultat: 21
e. Resultat: 42

ANTWORT: d. Resultat: 21*/
