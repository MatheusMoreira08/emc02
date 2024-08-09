/* Autor: Matheus Guilherme Moreira de Oliveira 
Data: 05/05/2024 
Objetivo: Calcula o salário líquido de um funcionário, considerando o salário bruto, prêmio, e descontos do INSS e IR.
*/
#include <stdio.h>
int main() {
    //variaveis
    float salario_bruto, premio, base_inss, base_ir, taxa_inss, taxa_ir;
    float rendimento, desconto_inss, desconto_ir, salario_liquido;
    //declarando valor
    printf("==== Demonstrativo de Pagamento ====\n\n");
    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);
    
    printf("Digite o premio: ");
    scanf("%f", &premio);
    
    printf("Digite a base do INSS: ");
    scanf("%f", &base_inss);
    
    printf("Digite a base do IR: ");
    scanf("%f", &base_ir);
    
    printf("Digite a taxa do INSS: ");
    scanf("%f", &taxa_inss);
    
    printf("Digite a taxa do IR: ");
    scanf("%f", &taxa_ir);

    // Calcule o rendimento
    rendimento = salario_bruto + premio;

    // Verifique se o desconto do INSS é aplicável
    if (rendimento > base_inss) {
        desconto_inss = (rendimento - base_inss) * taxa_inss;
    } else {
        desconto_inss = 0.0;
    }

    // Verifique se o desconto do IR é aplicável
    if (rendimento - desconto_inss > base_ir) {
        desconto_ir = ((rendimento - desconto_inss) - base_ir) * taxa_ir;
    } else {
        desconto_ir = 0.0;
    }

    // Calcule o salário líquido
    salario_liquido = rendimento - desconto_inss - desconto_ir;

    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Premio: R$ %.2f\n", premio);
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Desconto INSS: R$ %.2f\n", desconto_inss);
    printf("Desconto IR: R$ %.2f\n", desconto_ir);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
