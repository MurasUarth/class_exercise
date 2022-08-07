//Murilo Teixeira Uarth
//20103425
//Lista de Exercícios: Linguagem C - Lista 9 Recursão - Exercício 2

#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero, res;

    printf("Digite um numero para realizar o calculo fatorial: ");
    scanf("%d", &numero);

    res = fatorial(numero);

    printf("Fatorial de %d igual a: %d", numero, res);
    return 0;
}

int fatorial (int n) {
    
    if(n == 0) return 1;

    else { 
        return (fatorial(n-1)*n);
    }
}
