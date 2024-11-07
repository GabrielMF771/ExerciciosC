#include <stdio.h>

int main(){
    int i, valor;

    do{
        printf("Digite um numero: ");
        scanf("%d", &valor);

        if(valor <= 0){
            printf("Valor invalido, tente novamente!\n\n");
        }
    }
    while (valor <= 0);

    printf("Os numeros inteiros entre 1 e %d sao:\n", valor);

    for(i = 1 ; i <= valor ; i++){
        printf("%d\n", i);
    }

    return 0;
}