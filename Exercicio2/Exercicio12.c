#include <stdio.h>

int main(){
    int numeroConta; 
    float saldo, debito, credito, saldoAtual;

    printf("Digite o NUMERO da sua conta: ");
    scanf("%d", &numeroConta);
    
    printf("Digite o SALDO da sua conta: ");
    scanf("%f", &saldo);
    
    printf("Digite o DEBITO da sua conta: ");
    scanf("%f", &debito);
    
    printf("Digite o CREDITO da sua conta: ");
    scanf("%f", &credito);

    saldoAtual = saldo + credito - debito;

    printf("Seu saldo atual e R$%.2f\n", saldoAtual);

    if(saldoAtual < 0){
        printf("Saldo Negativo!\n");
    }
    else{
        printf("Saldo Positivo!\n");
    }

    return 0;
}