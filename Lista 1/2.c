#include <stdio.h>

int tamVetorX;
int tamVetorY;
int tamVetorW;

int geraTamY(int X[]) {
    int cont = 0;

    for (int i = 0; i < tamVetorX; i++) {
        if(X[i] > 10 && X[i] < 40) cont++;
    }

    return cont;
}

void preencheY(int X[], int Y[]) {
    int cont = 0;

    for (int i = 0; i < tamVetorX; i++) {
        if(X[i] > 10 && X[i] < 40) Y[cont++] = X[i];
    }
}

int geraTamW(int X[]) {
    int cont = 0;

    for (int i = 0; i < tamVetorX; i++) {
        if(i % 2 == 0) cont++;
    }

    return cont;
}

void preencheW (int X[], int W[]){
    int cont = 0;

    for (int i = 0; i < tamVetorX; i++) {
        if(i % 2 == 0) W[cont++] = X[i];
    }
}

int BuscaSequencial(int *vetor, int tamVetor, int num){
    for (int i = 0; i < tamVetor; i++)
        if (vetor[i] == num)
            return i;
    return 0;
}


void main() {
    int maiorNum, menorNum, num, z, indice;

    printf("\nTamanho do vetor: ");
    scanf("%d",&tamVetorX);

    int X[tamVetorX];

    for (int i = 0; i < tamVetorX; i++) {
        scanf("%i",&X[i]);
        if (i == 0) maiorNum = menorNum = X[i];
        else{
            if (X[i] > maiorNum) maiorNum = X[i];
            else if (X[i] < menorNum) menorNum = X[i];
        }
    }

    tamVetorY = geraTamY(X);
    int Y[tamVetorY];
    preencheY(X, Y);

    printf("Vetor Y:\n");

    for (int i = 0; i < tamVetorY; i++) {
        printf("%d\n",Y[i]);
    }

    tamVetorW = geraTamW(X);
    int W[tamVetorW];
    preencheW(X, W);

    printf("Vetor W:\n");

    for (int i = 0; i < tamVetorW; i++) {
        printf("%d\n",W[i]);
    }

    printf("Pesquisar existência no vetor X: ");
    scanf("%d",&num);

    indice = BuscaSequencial(X, tamVetorX, num);
    indice ? printf("Existe no indice: %d\n",indice) : printf("Não existe no vetor\n");

    printf("Maior elemento de X: %d\nMenor elemento de X: %d\n", maiorNum, menorNum);
}