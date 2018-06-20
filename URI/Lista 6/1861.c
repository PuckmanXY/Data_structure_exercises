#include <stdio.h>
#include <string.h>

int compare_strings(char *t1, char *t2) {
    int tam1 = sizeof(t1)/sizeof(char);
    int tam2 = sizeof(t2)/sizeof(char);
    int len = 0, i;

    if (tam1 != tam2)
        return 0;
    else
        len = tam1;
    
    for (i = 0; i < len - 1; i++) {
        if(t1[i] != t2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
  char murderers[100000][10];
  char victims[100000][10], assassin[10];
  int numberOfMurderers = 0, isAlive, numberOfVictims;

  while ((scanf("%s %s",murderers[numberOfMurderers], victims[numberOfMurderers])) != EOF)
    numberOfMurderers++;

  for (int i = 0; i < numberOfMurderers; i++) {
    strcpy(assassin, murderers[i]);
    isAlive = 1;
    numberOfVictims = 0;

    for (int j = 0; j < numberOfMurderers; j++) {           // checks if assassin is dead
      if (compare_strings(murderers[i], victims[j])) {
        isAlive = 0;
      }
    }
    for (int j = 0; j < i; j++) {
      if(compare_strings(murderers[i], murderers[j]))
        isAlive = 0;
    }

    if (isAlive == 1) {
      for (int j = i; j < numberOfMurderers; j++) {         // checks all assassin's murders
        if (compare_strings(murderers[i], murderers[j])) {
          numberOfVictims++;
        }
      }
      printf("%s %d\n", assassin, numberOfVictims);
    }
  }

  return 0;
}