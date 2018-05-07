#include <stdio.h>
#include <string.h>

typedef struct Person {
  char name[11];
  int isAlive;
  struct Person** victims;
} Person;

Person createCase(char names) {
  Person assassin;
  char assassinName, victimName, *token;
  int i = 0, startPosition;

  while ((token = strsep(&names, ","))) {
    if (i) {
      assassin.name = *token;
      i++;
    }
    else
      assassin.victims = *token;
  }


  assassin.name = vNames[0];
  assassin.victims = vNames[1];

  return assassin;
}

void main() {
  char testCase[22];
  char *token, *str, *tofree;
  Person assassin;

  while (scanf("%s",&testCase) != EOF) {
    assassin = createCase(testCase);

    printf("Assassin: %s\nVictim: %s\n",assassin->name, assassin->victims);
  }
}