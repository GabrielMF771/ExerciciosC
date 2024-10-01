#include <stdio.h>

int MenorNum(int num1, int num2){
    if(num1 < num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int numero1, numero2, menor;

    printf("Menor Numero\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    menor = MenorNum(numero1, numero2);
    
    printf("\nO menor numero e: %d", menor);

    return 0;
}