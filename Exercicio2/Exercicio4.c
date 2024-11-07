#include <stdio.h>

int main(){
    float nota1, nota2, notaFinal;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    notaFinal = (nota1 + nota2) / 2;

    if(notaFinal >= 7){
        printf("\nAprovado!\n");
        printf("Sua nota e: %.1f", notaFinal);
    }
    else{
        printf("\nReprovado!\n");
        printf("Sua nota e: %.1f", notaFinal);
    }

    return 0;
}