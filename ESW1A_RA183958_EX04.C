/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Faça um programa que analisa a quantidade de peças vendidas por um funcionário de uma loja 
com afinalidade de conceder gratificação no salário dentro dos parâmetros
*/
#include <stdio.h>
int main() {
  //variaveis
  char nome[40];
  float salario, gratificacao = 0;
  int pecas;
  //declarando as variaveis
  printf("Digite o nome: ");
  scanf("%s", nome);
  printf("Digite o salario: ");
  scanf("%f", &salario);
  printf("Digite a quantidade de pecas vendidas: ");
  scanf("%d", &pecas);
  //calculo
  if (pecas <= 30) {
    gratificacao = 0;
  } else if (pecas <= 60) {
    gratificacao = salario * 0.10;
  } else if (pecas <= 100) {
    gratificacao = salario * 0.15;
  } else if (pecas <= 150) {
    gratificacao = salario * 0.20;
  } else {
    gratificacao = salario * 0.30;
  }
  //saida
  printf("funcionario %s gratificacao R$ %.2f, salario total R$ %.2f\n", nome, gratificacao, salario + gratificacao);
  return 0;
}