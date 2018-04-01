#include <stdio.h>

typedef struct Pilha {
    int cartas[100];
    int topo, base;
} Pilha;

void push(Pilha *pilha, int n) {
    pilha->cartas[pilha->base++] = n;
}

int pop(Pilha *pilha) {
    return pilha->cartas[pilha->topo++];
}

int main() {
    Pilha pilha;
    int n, i, valor, discartada, count;

    while (scanf("%d", &n) != EOF) {
        count = 0;
        pilha.base = n;
        pilha.topo = 0;

        if (n == 0)
            return 0;
        
        for (i = 0; i < n; i++)
            pilha.cartas[i] = i + 1;
        
        while (pilha.topo != pilha.base - 1) {
            if (count == 0) {
                discartada = pop(&pilha);
                if (discartada == 1)
                    printf("Discarded cards: %d", discartada);
                else
                    printf(", %d", discartada);
                
                count++;
            }
            else {
                valor = pop(&pilha);
                push(&pilha, valor);
                count--;
            }
        }
        printf("\n");
        printf("Remaining card: %d\n", pilha.cartas[pilha.base-1]);
    }
}