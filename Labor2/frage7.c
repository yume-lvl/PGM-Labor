/*FRAGE 7:

Erstellen Sie ein Programm, das die Blutalkoholkonzentration errechnet, siehe Wikipedia.

Verwenden Sie die Formel von Widmark:
W = A / (m * r)
mit
Formelzeichen   Bedeutung
w	            Blutalkoholkonzentration des Alkohols im Körper in Promille
A	            die aufgenommene Masse des Alkohols in Gramm (g)
m	            die Masse der Person in Kilogramm (kg)
r	            der Reduktions- oder Verteilungsfaktor im Körper: Männer: 0,7; Frauen: 0,60; Säuglinge/Kleinkinder: 0,80

Um A zu berechnen, verwenden Sie:
A = V * e * phi
Formelzeichen	Bedeutung
V	            Volumen des Getränks (ml), z.B. 500 ml
e	            Alkoholanteil, z.B. 5 Prozent bei Bier
phi	            Dichte des Alkohols, hier 0,8 g/m

Zum Beispiel werden folgende Daten eingegeben:
m 80 500 5 

Ein Mann (m; alternativ w für weiblich oder k für Kind) mit einem Gewicht von 80 kg trinkt ein Bier mit 5 Prozent Alkoholgehalt.

Als Ergebnis soll dann: 0.36 Promille ausgegeben werden.*/


//CODE;
#include <stdio.h>
int main()
{
    //Deklaration von Variablen
    char geschlecht;
    double m, V, e; //m(Masse), V(Volumen), e(Alkoholanteil)
    double phi = 0.8; //Dichte des Alkohols
    double w, A, r; //w(Blutalkoholkonzentration), A(Alkohols in g), r(Reduktionsfaktor)

    //Eingabe
    scanf("%c %lf %lf %lf", &geschlecht, &m, &V, &e); 

    //Reduktionsfaktor bestimmen
    if(geschlecht == 'm') {
        r = 0.7;
    } else if(geschlecht == 'w') {
         r = 0.6;
    } else if(geschlecht == 'k') {
        r = 0.8;
    } else {
        printf("Ungultige Geschlecht!\n");
        return 1;
    }

    //Berechnung
    A = V * (e / 100.0) * phi; //Alkoholmasse g
    w = A / (m * r); //Blutalkoholkonzentration in Promille

    //Ausgabe
    printf("%.2f Promille\n", w);

    return 0;
}
