#include <stdio.h>

int bubbleSort(int array[], int tam) {
    int i, j, aux, result = 0, originalVet[tam];
    
    for (i = 0; i < tam; i++)
        originalVet[i] = array[i];

    for (i = 0; i < tam; i++)
        for (j = 0; j < i; j++)
            if (array[i] > array[j]) {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
    
    for (i = 0; i < tam; i++)
        if (originalVet[i] == array[i])
            result++;
            
    return result;
}

void main() {
    int numberOfTests = 0, numberOfStudents, i = 0, j = 0;
    
    while (numberOfTests <= 0)
        scanf("%d", &numberOfTests);
    
    int results[numberOfTests];
    
    for (i = 0; i < numberOfTests; i++) {

        scanf("%d", &numberOfStudents);
        if (numberOfStudents <= 1 || numberOfStudents >= 1000)
            continue;
        
        int queue[numberOfStudents];

        for (j = 0; j < numberOfStudents; j++){
            scanf("%d", &queue[j]);
            if (queue[j] <= 1 || queue[j] >= 1000)
                continue;
        }

        results[i] = bubbleSort(queue, numberOfStudents);
    }

    for (i = 0; i < numberOfTests; i++)
        printf("%d\n",results[i]);
}