/*FRAGE 10:
Erstellen Sie ein Programm, das ein kariertes Spielfeld aus den Zeichen + und - ausgibt. 
Dafür werden zwei Zahlen (Zeilen, Spalten) eingegeben.
Achten Sie darauf, dass keine gleichen Zeichen direkt neben- oder übereinander stehen.

Bei der Eingabe 3 6 sollen als Ergebnis drei Zeilen mit je sechs Zeichen
+-+-+-                                                                           
-+-+-+                                                                           
+-+-+-
ausgegeben werden.*/


//CODE:
#include <stdio.h>
int main()
{
    int zeilen, spalten;
    char plus = '+';
    char minus = '-';

    scanf("%d %d", &zeilen, &spalten);

    for(int i = 0; i < zeilen; i++){
        for(int j = 0; j < spalten; j++){
            if((i+j) % 2 == 0){
                printf("+");
            }else{
                printf("-");
            }
        }

        printf("\n");

    }

    return 0;

}
