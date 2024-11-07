#include <stdio.h>

int main(){
    float salarioFixo, valorVendas, salarioTotal, comissao;

    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor das vendas desse vendedor: ");
    scanf("%f", &valorVendas);

    if(valorVendas > 1500){
        comissao = (1500 * 0.03) + ((valorVendas - 1500) * 0.05);
    }
    else{
        comissao = valorVendas * 0.03;
    }

    salarioTotal = salarioFixo + comissao;

    printf("O salario total do vendedor e: R$%.2f", salarioTotal);
    
    return 0;
    }