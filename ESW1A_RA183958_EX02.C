/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Efetuar a leitura de quatro números inteiros e apresentar os números
*/
#include <stdio.h>
int main() {
    //variaveis
    int num1, num2, num3, num4;
    //declarando as variveis
    printf("==== Numeros Divisiveis por 2 ou 3 ====\n\n");
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Digite um outro numero: ");
    scanf("%d", &num3);
    printf("Agora digite mais um ultimo numero: ");
    scanf("%d", &num4);
    printf("Numeros divisiveis por 2 ou 3: ");
    //calculo
    if (num1 % 2 == 0 || num1 % 3 == 0) printf("%d ", num1);
    if (num2 % 2 == 0 || num2 % 3 == 0) printf("%d ", num2);
    if (num3 % 2 == 0 || num3 % 3 == 0) printf("%d ", num3);
    if (num4 % 2 == 0 || num4 % 3 == 0) printf("%d ", num4);
    printf("\n");

    return 0;
}
