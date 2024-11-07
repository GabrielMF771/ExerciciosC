#include <stdio.h>

int main(){
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if(valor1 == valor2){
        printf("Os valores precisam ser diferentes!");
        return 1;
    }
    else if(valor1 > valor2){
        printf("Os numeros em ordem crescente sao: [%d, %d]", valor1, valor2);
    }
    else{
        printf("Os numeros em ordem crescente sao: [%d, %d]", valor2, valor1);
    }

    return 0;
}