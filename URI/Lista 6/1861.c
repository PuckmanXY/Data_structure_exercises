#include <stdio.h>
#include <string.h>

typedef struct Person {
  char name[10];
  int victims;
} Person;

void main() {
  char *testCase;
  char *pointer;
  while (scanf("%s", &testCase) != EOF) {
    pointer = strsep(&testCase, " ");
  }
}