/*FRAGE 9:
Erstellen Sie ein Programm, das einen Rahmen aus Sternen (char '*') ausgibt.
Dafür werden zwei Zahlen (Zeilen, Spalten) eingegeben.

Bei den Zahlen 3 6 sollen als Ergebnis ein unausgefülltes Rechteck mit drei Zeilen mit je sechs Zeichen
******
*    *
******
ausgegeben werden.*/


//CODE:
#include <stdio.h>
int main()
{
    int zeilen, spalten;
    char stern = '*';

    scanf("%d %d", &zeilen, &spalten);

    for(int i = 0; i < zeilen; i++){
        for(int j = 0; j < spalten; j++){
            if(i == 0 || i == zeilen - 1 || j == 0 || j == spalten - 1){
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
