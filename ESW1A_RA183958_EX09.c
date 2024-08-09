/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Identifica se um número inteiro positivo digitado pelo usuário é par, ímpar e/ou múltiplo de 3, 5 ou 7.
*/
#include <stdio.h>

int main() {
  //variaveis
    int numero;
  //declarando as variavies
    printf("==== Identificar Numeros ====\n\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
  //calculo
    if (numero % 2 == 0) {
        printf("%d e par.\n", numero);
    } else {
        printf("%d e impar.\n", numero);
    }

    if (numero % 3 == 0) {
        printf("%d e multiplo de 3.\n", numero);
    }

    if (numero % 5 == 0) {
        printf("%d e multiplo de 5.\n", numero);
    }

    if (numero % 7 == 0) {
        printf("%d e multiplo de 7.\n", numero);
    }

    return 0;
}
