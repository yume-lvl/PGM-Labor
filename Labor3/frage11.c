/*FRAGE 11:
Unter Verwendung der Formel: GradFahrenheit = (GradCelsius ∗ 9 / 5) + 32
soll eine Temperaturtabelle in Celsius und Fahrenheit in folgender Form auf dem Bildschirm ausgegeben werden:

Celsius Fahrenheit                                                               
    -20         -4
      0         32
     20         68
     40        104
     60        140
        [...]         
    300        572

Die Tabelle soll alle Werte von -20°C bis 300°C und die Umrechnung in °F darstellen.
Die Ausgaben von Celsius und Fahrenheit sollen rechtsbündig erfolgen.*/


//CODE:
#include <stdio.h>
int main()
{
    int celsius;
    float fahrenheit;

    printf("Celsius Fahrenheit\n");

    for(celsius = -20; celsius <= 300; celsius += 20){
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%7d %11.0f\n", celsius, fahrenheit);
    }

    return 0;

}
