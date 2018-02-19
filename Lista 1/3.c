#include <stdio.h>

int nElementos;

void geraC(int A[], int B[], int C[]){
    for (int i = 0; i < (2*nElementos); i++) {
        C[(2 * i) + 1] = A[i];
        C[2 * i] = B[i];
    }
}

int BuscaSequencial(int *vetor, int tamVetor, int num){
    for (int i = 0; i < tamVetor; i++)
        if (vetor[i] == num)
            return i;
    return 0;
}

void main() {
    int num, indice;

    printf("\nNúmero de elementos: ");
    scanf("%d",&nElementos);

    int A[nElementos], B[nElementos], C[2 * nElementos];

    printf("Valores de A: \n");
    for(int i = 0; i < nElementos; i++){
        scanf("%d",&A[i]);
    }

    printf("Valores de B: \n");
    for(int i = 0; i < nElementos; i++){
        scanf("%d",&B[i]);
    }

    geraC(A, B, C);

    printf("Vetor C:\n");
	for(int i = 0; i < 2*nElementos; i++) {
        printf("%d\n",C[i]);
    }

    printf("\nBuscar por elemento em C: ");
    scanf("%d",&num);

    indice = BuscaSequencial(C, 2*nElementos, num);
    indice ? printf("Existe no índice %d\n",indice) : printf("Não existe no vetor");
}