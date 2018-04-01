#include <stdio.h>
int main() {
    int testCases, tamString, openingCount, closingCount,
    i, j;
    char diamondsAndSand[1000];

    scanf("%d",&testCases);

    int numberOfDiamonds[testCases - 1];

    for (i = 0; i < testCases; i++) {
        openingCount = 0;
        closingCount = 0;
        scanf("%s",&diamondsAndSand);

        tamString = sizeof(diamondsAndSand) / sizeof(char);

        for (j = 0; j < tamString; j++) {
            switch(diamondsAndSand[j]) {
                case '<':
                    openingCount++;
                    break;
                case '>':
                    closingCount++;
                    break;
            }
        }
        numberOfDiamonds[i] = openingCount < closingCount ? openingCount : closingCount;
    }

    for (i = 0; i < testCases; i++)
        printf("%d\n",numberOfDiamonds[i]);
    
    return 1;
}