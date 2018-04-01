#include <stdio.h>
#include <string.h>

int countDiamonds(char str[], int strSize) {
    int diamondCount = 0, i, j;
    char diamond[2] = "<>", testing[2];

    for (i = 0; i < strSize; i++) {
        if (str[i] == '.') {
            for (j = i; j < strSize; j++) {
                str[j] = str[j + 1];
            }
            strSize--;
            i--;
        }
    }

    i = j = 0;
    
    while (i < strSize) {
        if (str[i] == '<' && str[i + 1] == '>') {
            diamondCount++;
            j = i;
            for (j = i; j < strSize - 2; j++)
                str[j] = str[j + 2];
            i = 0;
            str[strSize - 2] = str[strSize - 1] = ' ';
            strSize -= 2;
            continue;
        }
        i++;
    }
    return diamondCount;
}


int main() {
    int testCases, strSize, diamondCount,
    i, j, k;
    char diamondsAndSand[1000];

    scanf("%d",&testCases);

    int numberOfDiamonds[testCases - 1];

    for (i = 0; i < testCases; i++) {
        diamondCount = 0;
        scanf("%s",&diamondsAndSand);

        strSize = strlen(diamondsAndSand);

        numberOfDiamonds[i] = countDiamonds(diamondsAndSand, strSize);
        
    }

    for (i = 0; i < testCases; i++)
        printf("%d\n",numberOfDiamonds[i]);
    
    return 1;
}