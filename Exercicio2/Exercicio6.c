#include <stdio.h>

int main(){
    float valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if(valor1 == valor2){
        printf("Os valores precisam ser diferentes!");
        return 1;
    }
    else if(valor1 > valor2){
        printf("O primeiro valor e maior!");;
    }
    else{
        printf("O segundo valor e maior!");
    }

    return 0;
}