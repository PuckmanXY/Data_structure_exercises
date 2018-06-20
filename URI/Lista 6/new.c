#include <stdio.h>
#include <string.h>

typedef struct Murder {
  char murderer[10];
  char victim[10];
} Murder;

int main() {
  Murder murders[100000];
  int numberOfMurderers = 0, assassinations = 0;
  char assassin[10];
  int numberOfMurders = 0;
  int isAlive;

  for (int i = 0; i < 3; i++) {
    scanf("%s %s",&murders[i].murderer, &murders[i].victim);
    numberOfMurderers++;
  }

  for (int i = 0; i < numberOfMurderers; i++) {
    strcpy(assassin, murders[i].murderer);
    isAlive = 1;
    numberOfMurders = 0;


    printf("ANALISANDO -> %s\n", assassin);

    for (int j = 0; j < numberOfMurderers; j++) {           // checks if assassin is dead
      printf("\n%s está sendo comparado com %s", assassin, murders[j].victim);
      if (assassin == murders[j].victim)
        isAlive = 0;
    }

    printf("\n%s saiu da comparação e está vivo -> %d", assassin, isAlive);

    if (isAlive == 1) {
      for (int j = i; j < numberOfMurderers; j++) {         // checks all assassin's murders
        printf("\nComparando %s com %s", assassin, murders[j].murderer);
        if (assassin == murders[j].murderer) {
          numberOfMurders++;
          strcpy(murders[j].murderer, "ja foi");
        }
      }
      printf("%s %d\n", assassin, numberOfMurders);
    }
  }

  return 0;
}