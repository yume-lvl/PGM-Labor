/*FRAGE 12:
Code Refactoring und Modularisierung.
Nachfolgend ist ein unvollständiges C Programm der Verwaltung von Zahlen in einem Array gegeben.
Dieser Programmcode soll nachfolgend sinnvoll restrukturiert und modularisiert werden:
1. Erstellen Sie eine sinnvolle Header-Datei, welche die Funktionsdeklarationen enthält.
Achten Sie darauf alle in der Header-Datei benötigten Instruktionen anzugeben.
2. Erstellen Sie eine Implementierungsdatei, die die Funktionsdefinitionen enthält.

(!) Bei dieser Aufgabe ist es nicht möglich mehrere Dateien hochzuladen.
Daher kann diese Aufgaben nur in einer IDE bearbeitet werden.

GEGEBEN:
#include <stdio.h>
#define MAX_NUMBERS 10

// Globale Variablen
int numbers[MAX_NUMBERS];
int count = 0;

// Funktion zum Hinzufügen einer Zahl
void add_number()
{
    if (count >= MAX_NUMBERS)
    {
        printf("Array ist voll!\n");
        return;
    }

    printf("Zahl eingeben: ");
    scanf("%d", &numbers[count]);
    printf("%d ", numbers[count]);
    count++;
}

// Funktion zum Anzeigen aller Zahlen
void print_numbers()
{
    printf("\nAlle Zahlen: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

// Funktion zum Berechnen des Durchschnitts
float calculate_average()
{
    if (count == 0)
        return 0.0;
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return (float)sum / count;
}

// Funktion zum Finden der größten Zahl
int find_max()
{
    if (count == 0)
        return 0;
    int max = numbers[0];
    for (int i = 1; i < count; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int choice;
    do
    {
        printf("\n1. Zahl hinzufügen\n");
        printf("2. Alle Zahlen anzeigen\n");
        printf("3. Durchschnitt berechnen\n");
        printf("4. Größte Zahl finden\n");
        printf("5. Beenden\n");
        printf("Wahl: ");
        scanf("%d", &choice);
        printf("%d ", choice);
        switch (choice)
        {
        case 1:
            add_number();
            break;
        case 2:
            print_numbers();
            break;
        case 3:
            printf("Durchschnitt: %.2f\n", calculate_average());
            break;
        case 4:
            printf("Größte Zahl: %d\n", find_max());
            break;
        case 5:
            printf("Programm wird beendet.\n");
            break;
        default:
            printf("Ungültige Eingabe!\n");
        }
    } while (choice != 5);
    
    return 0;
}*/

//CODE:
#include <stdio.h>
#define MAX_NUMBERS 10

//Funktionsdeklarationen
void add_number();
void print_numbers();
float calculate_average();
int find_max();

//Globale Variablen
int numbers[MAX_NUMBERS];
int count = 0;

//Funktion zum Hinzufügen einer Zahl
void add_number() {
if (count >= MAX_NUMBERS) {
printf("Array ist voll!\n");
return;
}

printf("Zahl eingeben: ");
scanf("%d", &numbers[count]);
printf("%d hinzugefugt.\n", numbers[count]);
count++;

}

//Funktion zum Anzeigen aller Zahlen
void print_numbers() {
if (count == 0) {
printf("Keine Zahlen im Array.\n");
return;
}
printf("Alle Zahlen: ");
for (int i = 0; i < count; i++) {
printf("%d ", numbers[i]);
}
printf("\n");
}

//Funktion zum Berechnen des Durchschnitts
float calculate_average() {
if (count == 0)
return 0.0;
int sum = 0;
for (int i = 0; i < count; i++) {
sum += numbers[i];
}
return (float)sum / count;
}

//Funktion zum Finden der größten Zahl
int find_max() {
if (count == 0)
return 0;
int max = numbers[0];
for (int i = 1; i < count; i++) {
if (numbers[i] > max) {
max = numbers[i];
}
}
return max;
}

int main() {
int choice;
do {
printf("\n1. Zahl hinzufugen\n");
printf("2. Alle Zahlen anzeigen\n");
printf("3. Durchschnitt berechnen\n");
printf("4. Groeste Zahl finden\n");
printf("5. Beenden\n");
printf("Wahl: ");
scanf("%d", &choice);

    switch (choice) {
        case 1:
            add_number();
            break;
        case 2:
            print_numbers();
            break;
        case 3:
            printf("Durchschnitt: %.2f\n", calculate_average());
            break;
        case 4:
            printf("Groeste Zahl: %d\n", find_max());
            break;
        case 5:
            printf("Programm wird beendet.\n");
            break;
        default:
            printf("Ungultige Eingabe!\n");
    }
} while (choice != 5);

return 0;

}
