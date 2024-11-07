#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        printf("O numero e positivo");
    }
    else{
        printf("O numero e negativo");
    }

    return 0;
}