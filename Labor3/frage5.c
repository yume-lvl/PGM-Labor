/*FRAGE 5:
Gegeben sei folgendes Programm:*/

#include <stdio.h>
int main()
{
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
            counter += i;
    }
    printf("result: %d\n", counter);
    return 0;
}

/*Was wird ausgegeben? Bitte nur nachdenken, nicht ausprobieren!
Select one:
a. 25
b. 55
c. 45
d. 0*

ANTWORT: a. 25*/
