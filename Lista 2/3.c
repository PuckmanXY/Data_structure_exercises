#include <stdio.h>
void main(){
    int x = 0, y = 100001, i, j;
    while (x < 1 || x > 20 || x > y || y > 100000) 
        scanf("%d%d", &x, &y);
    
    for (i = 1; i <= y; ){
        for (j = 0; j < x; j++){
            printf(j == x-1 ? "%d" : "%d ",i++);
        }
        printf("\n");
    }
}