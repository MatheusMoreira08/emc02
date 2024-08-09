/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Ordena três números inteiros digitados pelo usuário em ordem crescente.
*/
#include <stdio.h>
int main() {
    //variaveis
    int a, b, c;
    //declarando as variaveis
    printf("==== Ordenar Numeros ====\n\n");
    printf("Digite um numero:");
    scanf("%d", &a);
    printf("Digite outro numero:");
    scanf("%d", &b);
    printf("Digite mais um numero:");
    scanf("%d", &c);
    //calculo
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Numeros em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
