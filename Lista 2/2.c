#include <stdio.h>
void main(){
    int aux, j = 7, i;
    
    for (i = 1; i < 10; i += 2){
        for (aux = 0; aux < 3; aux++)
            printf("I=%d J=%d\n", i, j--);
        j += 5;
    }
}