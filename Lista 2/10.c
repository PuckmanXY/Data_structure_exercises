#include <stdio.h>

void print(int input) {
    int i, j;
    for (i = 0; i < input; i++){
        for (j = 0; j < input; j++) {
            if (i + j == input - 1)
                printf("2");
            else if (i == j)
                printf("1");
            else
                printf("3");
        }
        printf("\n");
    }
}

void main() {
    int input;

    while (scanf("%d", &input) != EOF) {
        if (input < 3 || input > 70)
            continue;
        else
            print(input);
    }
}