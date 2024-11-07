#include <stdio.h>

int main()
{
    int carrosVendidos;
    float valorVendas, salarioFixo, comissaoCarro, salarioFinal;
   
    printf("Digite o numero total de carros vendidos: ");
    scanf("%d", &carrosVendidos);
   
    printf("Digite o valor total das vendas: R$");
    scanf("%f", &valorVendas);
   
    printf("Digite o salario fixo do funcionario: R$");
    scanf("%f", &salarioFixo);
   
    printf("Digite o valor da comissao por carro vendido: R$");
    scanf("%f", &comissaoCarro);
   
    salarioFinal = salarioFixo + (comissaoCarro * carrosVendidos) + (0.05 * valorVendas);
   
    printf("O salario final do vendedor e: R$%.2f", salarioFinal);
   
   
    return 0;
}