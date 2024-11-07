#include <stdio.h>

int main(){
    int numeroMacas;
    float valorMacas, valorTotal;

    printf("Digite o numero de macas: ");
    scanf("%d", &numeroMacas);

    if(numeroMacas < 12){
        valorMacas = 1.30;
        valorTotal = valorMacas * numeroMacas;
        printf("O valor da compra e de: %.2f", valorTotal);
    }
    else{
        valorMacas = 1.00;
        valorTotal = valorMacas * numeroMacas;
        printf("O valor da compra e de: R$%.2f", valorTotal);
    }

    return 0;
}