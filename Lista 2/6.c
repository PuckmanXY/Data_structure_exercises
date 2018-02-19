#include <stdio.h>
void main() {
    float M[12][12], input, result = 0;
    int column = -1, i, j;
    char operator = 'N';

    while (column < 0 || column > 11)
        scanf("%d",&column);

    while (operator != 'S' && operator != 'M')
        scanf("%c",&operator);
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
            if (j == column)
                result += M[i][j];
        }
    }

    switch (operator) {
        case 'S':
            printf("%.1f\n",result);
            break;
        case 'M':
            printf("%.1f\n",result/12);
    }
}