#include <stdio.h>
long long int fib(int num) {
    int i;
    unsigned long long int aux, first = 0, second = 1;
    if (num == 0)
        return first;
    if (num == 1)
        return second;
    else
        for (i = 0; i < num; i++){
            aux = second;
            second += first;
            first = aux;
        }
        return first;
}

void main() {
    int input, attempts = -1, i;

    while (attempts < 0)
        scanf("%d",&attempts);
    
    unsigned long long int sequenceNumbers[attempts], fibNumbers[attempts];
    
    for (i = 0; i < attempts; i++){
        scanf("%d",&input);
        sequenceNumbers[i] = input;
        fibNumbers[i] = fib(input);
    }

    for (i = 0; i < attempts; i++)
        printf("Fib(%lli) = %lli\n", sequenceNumbers[i], fibNumbers[i]);
}