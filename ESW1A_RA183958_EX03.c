/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Programa que calcula gratificação
*/
#include <stdio.h>
int main() {
    //variaveis
    float horas_extras, horas_faltas;
    //declarando as variaveis
    printf("==== Gratificação de Natal ====\n\n");
    printf("Digite o numero de horas extras: ");
    scanf("%f", &horas_extras);
    printf("Agora o numero de horas faltas: ");
    scanf("%f", &horas_faltas);
    //calculo
    float h = horas_extras - horas_faltas;
    float premio;

    if (h < 0) {
        premio = 0.00;
    } else if (h <= 10) {
        premio = 20.00;
    } else if (h <= 20) {
        premio = 40.00;
    } else if (h <= 30) {
        premio = 60.00;
    } else if (h <= 40) {
        premio = 80.00;
    } else {
        premio = 100.00;
    }

    printf("O valor do premio de Natal e R$ %.2f\n", premio);

    return 0;
}
