/*FRAGE 4:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int main()
{
    int counter = 0;
    int i = 0;
    while(1)
    {
        if (i == 4)
        {
            break;
        }
        counter += i;
        i++;
    }
    printf("result: %d\n", counter);
    return 0;
}

/*Was wird ausgegeben? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. 6
b. 0
c. 3
d. 55

ANTWORT: a. 6*/
