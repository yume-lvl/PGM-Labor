/*FRAGE 12:
Unter Verwendung der Formel: GradCelsius = 5 ∗ (GradFahrenheit − 32) / 9
soll eine Temperaturtabelle in Fahrenheit und Celsius in folgender Form auf dem Bildschirm ausgegeben werden:

Fahrenheit      Celsius   
       -20       -28.89
         0       -17.78
        20        -6.67
        40         4.44
        60        15.56
            [...]
       300       148.89      

Die Tabelle soll alle Werte von -20°F bis 300°F und die Umrechnung in °C darstellen.*/


//CODE:
#include <stdio.h>
int main()
{
       float fahrenheit, celsius;

       printf("Fahrenheit      Celsius\n");

       for(fahrenheit = -20.0; fahrenheit <= 300.0; fahrenheit += 20.0){
              celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
              printf("%10.0f %12.2f\n", fahrenheit, celsius);
       }

       return 0;
}
