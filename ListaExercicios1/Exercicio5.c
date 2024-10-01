#include <stdio.h>

int main()
{
    float salarioAtual, porcentagemReajuste, salarioNovo, valorReajuste;
   
    printf("Digite o valor do seu salario atual: ");
    scanf("%f", &salarioAtual);
   
    printf("Digite o percentual de reajuste (apenas o numero): ");
    scanf("%f", &porcentagemReajuste);
   
    valorReajuste = (float)salarioAtual * porcentagemReajuste / 100;
   
    salarioNovo = salarioAtual + valorReajuste;
   
    printf("O novo valor do seu salario e: %.2f", salarioNovo);
   
    return 0;
}