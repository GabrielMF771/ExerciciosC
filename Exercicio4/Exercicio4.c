#include <stdio.h>
#include <stdlib.h>

int Absoluto(int num){
    num = abs(num);

    return num;
}

int main(){
    int num1, num2, num3, num4, num5;

    printf("Valor Absoluto de 5 Numeros\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &num3);

    printf("\nDigite o quarto numero: ");
    scanf("%d", &num4);

    printf("\nDigite o quinto numero: ");
    scanf("%d", &num5);

    num1 = Absoluto(num1);
    num2 = Absoluto(num2);
    num3 = Absoluto(num3);
    num4 = Absoluto(num4);
    num5 = Absoluto(num5);

    printf("\nOs valores absolutos sao: %d %d %d %d %d", num1, num2, num3, num4, num5);
}
