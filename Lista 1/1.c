#include <stdio.h>

int tamVetor;

int ValidaNum(int num, int *v, int iteracao) {
    if(num >= 256){
        printf("Número inválido\n");
        return 1;
    }
    else{
        v[iteracao] = num;
        return 0;
    }
}

void OrdenaVetor(int v[]) {
    int aux;
    for(int i = 0; i < tamVetor - 1; i++){
        for(int j = 0; j < tamVetor - 1; j++){
            if(v[j] < v[j + 1]){
            aux = v[j];
            v[j] = v[j + 1];
            v[j + 1] = aux;
            }
        }
    }
}

int ParesNoVetor(int v[]) {
    int cont = 0;
    for (int i = 0; i < tamVetor; i++){
        if (! (v[i] % 2) ){
            cont++;
        }
    }
    return cont;
}

int ImparesNoVetor(int v[]) {
    int cont = 0;
    for (int i = 0; i < tamVetor; i++) {
        if (v[i] % 2) {
            cont++;
        }
    }
    return cont;
}
int ImparesMaioresQue50NoVetor(int v[]){
    int cont = 0;
    for (int i = 0; i < tamVetor; i++) {
        if (v[i] % 2 && v[i] > 50) {
            cont++;
        }
    }
    return cont;
}

void main() {
    int nPares, nImpares, nImparesMaioresQue50, num;

    while(1) {
        printf("\nTamanho do vetor (Max.: 100): ");
        scanf("%d",&tamVetor);
        if(tamVetor <= 100){
            break;
        }
    }

    int v[tamVetor];

    for (int i = 0; i < tamVetor; i++) {
        scanf("%i",&num);
        if(ValidaNum(num, v, i)) {
            i--;
        }
    }

    OrdenaVetor(v);
    printf("Vetor ordenado: ");
    for (int i = 0; i < tamVetor; i++)
        printf("%d ",v[i]);

    nPares = ParesNoVetor(v);
    printf("\nPares no vetor: %d\n",nPares);

    nImpares = ImparesNoVetor(v);
    printf("Impares no vetor: %d\n",nImpares);

    nImparesMaioresQue50 = ImparesMaioresQue50NoVetor(v);
    printf("Imares maiores que 50 no vetor: %d\n",nImparesMaioresQue50);
}