/*FRAGE 3:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int add(int a, int b) {
    int c = a + b;
    return 0;
}
int main() {
    printf("Resultat: %d", add(19, 23) );
    return 0;
}

/*Was kommt heraus? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. Resultat: 21
b. Programm startet nicht wg. Compiler
c. Resultat: 0
d. Resultat: 22
e. Programm stürzt ab
f. Resultat: 42

ANTWORT: c. Resultat: 0*/
