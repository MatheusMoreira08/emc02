/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo:  Calcule o desconto do INSS. 
*/
#include <stdio.h>
int main () {
  //variaveis
  float salario;
  float INSS;
  //declarando as variaveis
  printf("Digite o salario: ");
  scanf("%f",& salario);
  if (salario <= 1.570) {
    INSS = salario * 8/100;
  }
  else {
    INSS = salario * 9/100;
  }
  printf("O salario e %.2f\n", salario);
  printf("O INSS e %.2f\n", INSS);
return 0;
}