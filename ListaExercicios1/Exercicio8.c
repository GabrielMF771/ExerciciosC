#include <stdio.h>

int main(){
    int temperaturaC, temperaturaF;

    printf("Converter Fahrenheit para Celcius\n\n");

    printf("Digite a temperatura em Fahrenheit a ser convertida: ");
    scanf("%d", &temperaturaF);

    temperaturaC = (temperaturaF - 32) * 5 / 9;

    printf("Temperatura em Celcius: %d", temperaturaC);

    return 0;
}