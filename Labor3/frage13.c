#include <stdio.h>

#define SPITZE 1
#define GUT 2
#define BEFREIDIGEN 3
#define AUSREICHEND 4
#define DURCHGEFALLEN 5
#define JA 1
#define NEIN 0

int main(void)
{
  unsigned int note, bestanden;

  do{
    printf("\nGeben Sie bitte eine Note (1-5) ein: ");
    scanf("%u", &note);
  }while (note < 1 || note > 5);

  if(note == SPITZE)
    bestanden = JA;
  else if(note == GUT)
    bestanden = JA;
  else if(note == BEFREIDIGEN)
    bestanden = JA;
  else if(note == AUSREICHEND)
    bestanden = JA;
  else
    bestanden = NEIN;
  bestanden ? printf("\nOK!") : printf("\nNICHT bestanden");

  return 0;
  
}
