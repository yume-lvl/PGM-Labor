/*FRAGE 14:
Erstellen Sie ein Programm, dass ein Rechteck mit der Größe N erzeugt und den innenraum mit einem Kreuz ausfüllt.

Bei der Zahl 9 sollen als Ergebnis 9x9 Sternkasten mit Diagonalen ausgegeben werden. 
*********
**     **
* *   * *
*  * *  *
*   *   *
*  * *  *
* *   * *
**     **
*********
*/


//CODE:
#include <stdio.h>
int main()
{
    int n;
    char stern = '*';

    scanf("%d", &n);
    for(int i = 0; i < n; i++){ //Zeilenschleife
        for(int j = 0; j < n; j++){ //Spaltenschleife
            //Bedingungen:
            //i == 0          -> obere Kante
            //i == n - 1      -> untere Kante
            //j == 0          -> linke Kante
            //j == n - 1      -> rechte Kante
            //i == j          -> Hauptdiagonale (von links oben nach rechts unten)
            //i + j == n - 1  -> Gegendiagonale (von rechts oben nach links unten)
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i + j == n - 1)
               printf("%c", stern);
            else
               printf(" ");
        }

        printf("\n");
    }

    return 0;
}
