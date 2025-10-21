/*FRAGE 7:
Erstellen Sie ein Programm, das zwei Zeichen abwechselnd ausgibt, und zwar char '*' und '_'.
Die Anzahl der Zeichen soll durch eine Eingabe vorgegeben werden können.

Bei der Zahl 5 sollen als Ergebnis fünf Zeichen, also Sterne und Unterstriche 
abwechselnd *_*_* ausgegeben werden.

Tipp: Verwenden Sie den Modulo-Operator % , der den ganzzahligen Rest einer Division ausgibt, 
um in der Schleife jedes zweite Zeichen zu bestimmen.*/


//CODE:
#include <stdio.h>
int main()
{
    int eingabe;

    scanf("%d", &eingabe);

    for(int i = 0; i < eingabe; i++){
        if(i % 2 == 0){
            printf("*"); //bei geraden
        }else{
            printf("_"); //bei ungeraden
        }
    }

    return 0;

}
