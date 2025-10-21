/*FRAGE 8:
Erstellen Sie ein Programm, das ein Rechteck aus Sternen (char '*') ausgibt.
Dafür werden zwei Zahlen (Zeilen, Spalten) eingegeben.

Bei den Zahlen 3 6 sollen als Ergebnis drei Zeilen mit je sechs Sternen
******
******
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
            printf("%c", stern);
        }

        printf("\n");
    }

    return 0;
}
