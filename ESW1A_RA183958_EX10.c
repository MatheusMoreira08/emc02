/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Verifica se um aluno foi aprovado ou reprovado com base em suas quatro notas.
*/
#include <stdio.h>
int main() {
  //variaveis
    float nota1, nota2, nota3, nota4;
    //declarando as variaveis
    printf("==== Verificar Aprovacao ====\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    //calculo
    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
