#include <stdio.h>
void main() {
    int input = 1, i, j, testCase;

    while (scanf("%d",&input)) {
        
        if (input == 0) 
            break;

        for (i = 1; i <= input; i++) {
            for (j = 1; j <= input; j++) {
                
                testCase = j < i ? j : i;

                if (input - i + 1 < testCase)
                    testCase = input - i + 1;

                if (input - j + 1 < testCase)
                    testCase = input - j + 1;

                printf("%3d",testCase);
                
                if(j < input)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
}