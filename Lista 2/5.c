#include <stdio.h>
void main() {
    int num, positionsNumber = 1, i, lowestNumber, lowestNumberPosition;

    while(positionsNumber <= 1 || positionsNumber > 1000)
        scanf("%d",&positionsNumber);

    int array[positionsNumber];

    for (i = 0; i < positionsNumber; i++) {
        scanf("%d",&array[i]);
    }

    lowestNumber = array[0];
    lowestNumberPosition = 0;

    for (i = 1; i < positionsNumber; i++) {
        if (array[i] < lowestNumber) {
            lowestNumber = array[i];
            lowestNumberPosition = i;
        }
    }

    printf("Menor valor: %d\n",lowestNumber);
    printf("Posicao: %d\n",lowestNumberPosition);
}