#include <stdio.h>

int EPar(int a){
    if(a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int numero;

    printf("E Par ou Impar?\n");

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if(EPar(numero)){
        printf("\nO numero e par!");
    }
    else{
        printf("\nO numero e impar!");
    }

}