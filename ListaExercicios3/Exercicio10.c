#include <stdio.h>

int main(){
    int i, valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if(valor <= 0){
        printf("Valor Invalido!");
        return 1;
    }

    printf("Os numeros inteiros entre 1 e %d sao:\n", valor);

    for(i = 1 ; i <= valor ; i++){
        printf("%d\n", i);
    }
}