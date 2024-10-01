#include <stdio.h>

int main(){
    int valor1, valor2;
    float resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor (diferente de zero): ");
    scanf("%d", &valor2);

    while(valor2 == 0)
    {
        printf("Valor Invalido!\n");
        printf("Digite o segundo valor (diferente de zero): ");
        scanf("%d", &valor2);
    }

    resultado = (float)valor1 / valor2;

    printf("O resultado da divisao do valor 1 pelo valor 2 e: %.1f", resultado);
    return 0;
}