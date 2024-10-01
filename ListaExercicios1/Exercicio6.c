#include <stdio.h>

int main()
{
    float custoFabrica;
    float percentualDistribuidor = 0.28;
    float percentualImpostos = 0.45;
    float custoDistribuidor, custoImpostos, custoFinal;
   
    printf("Digite o custo de fabrica do carro: R$");
    scanf("%f", &custoFabrica);
   
    custoDistribuidor = custoFabrica * percentualDistribuidor;
   
    custoImpostos = custoFabrica * percentualImpostos;
   
    custoFinal = custoFabrica + custoImpostos + custoDistribuidor;
   
    printf("O custo final ao consumidor e: R$%.2f", custoFinal);
    return 0;
}