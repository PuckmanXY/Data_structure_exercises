#include <stdio.h>
int tam = 10;

int EhUnico(int list[], int i){
    for (int j = i + 1; j < tam; j++) {
        if(list[i] == list[j]){
            return 0;
        }
    }
    
    return 1;
}

void OrdenaVetor(int v[]) {
    int aux;
    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - 1; j++){
            if(v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int PesquisaBinaria (int x, int n, int v[]) {
    int e, m, d;
    e = 0; d = n-1;

    while (e <= d) {
        m = (e + d)/2;
        if (v[m] == x) return m;
        if (v[m] < x) e = m + 1;
        else d = m - 1;
    }

    return -1;
}

void main() {
    int lista[tam], unica[tam], j = 0, num, indice;

    for (int i = 0; i < tam; i++){
        scanf("%d",&lista[i]);
    }

    for (int i = 0; i < tam; i++){
        if (EhUnico(lista, i)){
            unica[j++] = lista[i];
        }
    }

    OrdenaVetor(unica);

    if(j == tam){
        printf("OK");
    }
    else{
        printf("\n%d elementos repetidos foram removidos\n",10 - j);
        printf("Lista única: ");
        for (int i = 0; i < j; i++){
            printf("%d ",unica[i]);
        }
    }
    printf("\n\n");

    printf("Número a ser pesquisado: ");
    scanf("%d",&num);

    indice = PesquisaBinaria(num, j, unica);

    printf((indice == -1) ? "Não existe no vetor" : "Existe na posição %d\n",indice);
}