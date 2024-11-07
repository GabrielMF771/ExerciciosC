#include <stdio.h>

int main(){
    float nota1, nota2, nota3, notaFinal;

    printf("Calculo de nota\n\n");

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    notaFinal = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;

    if (notaFinal > 10){
        notaFinal = 10;
    }

    printf("Nota final: %.1f", notaFinal);

    return 0;
}