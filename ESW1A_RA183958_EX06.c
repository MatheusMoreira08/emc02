/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Verifica se um número inteiro digitado pelo usuário é par ou ímpar.
*/
#include <stdio.h>
int main() {
    //variaveis
    int num;
    //declarando as variaveis
    printf("==== Par ou Impar ====\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    //calculo
    if (num % 2 == 0) {
        printf("%d e par.\n", num);
    } else {
        printf("%d e impar.\n", num);
    }

    return 0;
}
