/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Faça um programa que lendo o nome, 
idade em anos e sexo de um associado de um clube concede desconto na mensalidade a ser paga, observando:
*/
#include <stdio.h>
int main () {
  //variaveis
  char nome[40], sexo;
  int idade;
  float mensalidade, desconto = 0;
  //declarando as variaveis
  printf("Digite o nome: ");
  scanf("%s", nome);
  printf("Digite a idade: ");
  scanf("%d", &idade);
  printf("Digite o sexo (F/M): ");
  scanf("%s", &sexo);
  //calculo
  if(sexo == 'F') {
    if(idade <= 30) {
      desconto = mensalidade * 0.2;
     } else if(idade >30 && idade<= 40) {
      desconto = mensalidade * 0.3;
      } else if(idade >40) {
      desconto = mensalidade * 0.35;
    }     
  } else if(sexo == 'M') {
    if(idade > 25) {
      desconto = mensalidade * 0.25;
    }
  }
  printf("Digite a mensalidade a ser paga: ");
  scanf("%f", &mensalidade);
  float valorFinal = mensalidade - desconto;
  printf("\nNome: %s\nIdade: %d\nSexo: %c\nDesconto Aplicado: %.2f\nMensalidade a pagar com desconto: %.2f\n", 
  nome, idade, sexo, desconto, valorFinal);
  return 0;
}