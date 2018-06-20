#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
typedef struct Assassin {
  char name[10];
  int numberOfVictims;
  int isAlive;
  struct Assassin* victims[5];
} Assassin;

int main(void) {
  Assassin assassins[100000];
  char assassin[10], victim[10];
  int i = 0, nAssassins = 0, nVictims = 0;
  Assassin a1, a2;
  // while (scanf("%s %s", &assassins[i].name, &assassins[i].victims[i]->name) != EOF) {
  //   i += 1;
  // }

  for (i = 0; i < 3; i++) {
    scanf("%s %s", &assassin, &victim);
    // strcpy(assassin, a1.name);
    // strcpy(victim, a1.victims[a1.numberOfVictims]);
    // strcpy(victim, a2.name);
    a2.isAlive = 0;
  }

  // for (i = 0; i < 3; i++) {
  //   printf("%s", assassins[i].name);
  //   printf("%s", assassins[i].victims[i]->name);
  // }


  // for (int j = 0; j < i; j++) {
  //   for (int k = 0; k < i; k++) {
  //     if ()
  //   }
  // }


=======
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
>>>>>>> eaf129ffb231edf8f99b9f27594a855af3ac9a71
}