/*FRAGE 5:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int add(int a, int s) {
    if (a) s = add(a - 1, s);
    return s + a;
}
int main() {
    printf("Resultat: %d", add(4, 0));
    return 0;
}

/*Was kommt heraus? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. Resultat: 0
b. Resultat: 9
c. Resultat: 10
d. Programm startet nicht wg. Compiler
e. Programm stürzt ab

ANTWORT: c. Resultat: 10*/
