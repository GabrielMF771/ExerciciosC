#include <stdio.h>

int main(){
    int i, valor;

    do{
        printf("Digite um numero (1 a 10): ");
        scanf("%d", &valor);

        if(valor > 10){
            printf("\nApenas numeros de 1 a 10 sao aceitos!\n\n");
        }
    }
    while(valor > 10);

    printf("\nTabuada do %d:\n\n", valor);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }

    return 0;
}