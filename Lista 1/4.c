#include <stdio.h>

int validaNum(int num) {
    int cont = 0;
    for (int i = 1; i <= num; i++){
        if(num % i == 0) cont++;
    }

    return cont == 2 ? 1 : 0;
}


void main() {
    int num, cont = 0, maior, menor;
    while (1){
        printf("Número primo: ");
        scanf("%d",&num);
        if (validaNum(num)) break;
    }

    maior = menor = num;

    printf("Números primos maiores que %d:\n",num);

    while (1){
        if (validaNum(++maior)){
            cont++;
            printf("%d\n",maior);
        }
        if (cont == 2)
            break;
    }

    if (menor < 3) printf("Não existem primos menores que %d\n",menor);

    else{
        printf("Números primos menores que %d:\n",num);
        cont = 0;
        while (1){
            if (menor == 3){
                printf("2\n");
                break;
            }
            if (validaNum(--menor)){
                cont++;
                printf("%d\n",menor);
            }
            if (cont == 2)
                break;
        }
    }
}