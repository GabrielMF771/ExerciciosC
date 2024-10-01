#include <stdio.h>

int EDivisor(int a, int b){
    if (b % a == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int SomaDivisores(int num){
    int resultado = 0, i;

    for(i = 1 ; i < num ; i++){
            if (EDivisor(i, num)){
                resultado += i;
            }
        }

    return resultado;    
}

int main(){
    int numero, soma, i;

    printf("Soma dos Divisores de 5 numeros\n");

    for(i = 1 ; i <= 5 ; i++){
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &numero);

        soma = SomaDivisores(numero);

        printf("A soma dos divisores de %d e: %d\n", numero, soma);
    }
}