#include <stdio.h>
#include <stdlib.h>

/*  Questoes 2 e 3 : Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faça a alocação
dinamica de memoria. Em seguida, leia do usuario seus valores, imprima o vetor lido e mostre quantos dos
numeros sao pares e quantos sao ımpares. */

int main () {
    int vectorSize, *vector, i;
    int par = 0, impar = 0;

    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &vectorSize);

    vector = malloc(sizeof(int) * vectorSize);
    if(!vector){
        printf("Erro de falta de memória");
        return -1;
    }

    for(i = 0; i < vectorSize; i++){
        printf("Informe o %dº valor: \n", i+1);
        scanf("%d", &vector[i]);
    }

    for(i = 0; i < vectorSize; i++){
        printf("%dº elemento: ", i+1);
        printf("%d \n", vector[i]);
    }

    // Questão 3 a partir daqui

    for(i = 0; i < vectorSize; i++){ 

        if(vector[i] % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }

    printf("%d números pares \n", par);
    printf("%d números ímpares \n", impar);

    free(vector);

    return 0;
}