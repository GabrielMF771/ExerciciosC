#include <stdio.h>

//Gabriel Martins Fernandes

int main (){
    int a, b;

    printf("Antecessor de um numero\n\n");

    printf("Digite o valor desejado: ");
    scanf("%d", &a);

    b = --a;

    printf("O seu antecessor e: %d", b);

    getchar();
    getchar();
    return 0;
}