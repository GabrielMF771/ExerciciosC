#include <stdio.h>

//Gabriel Martins Fernandes

int main(){
    int base, altura, area;

    printf("Calculo da area de um retangulo\n\n");

    printf("Digite a base do retangulo em cm: ");
    scanf("%d", &base);

    printf("Digite a altura do retangulo em cm: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A area do retangulo e: %dcm2", area);

    getchar();
    getchar();
    return 0;
}