#include <stdio.h>
#include <locale.h>

void frac(float num, int* inteiro, float* frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    float numero, parteFracionaria;
    int parteInteira;

    printf("Mostrar as Partes de um Número Real\n\n");

    printf("Digite um número real: ");
    scanf("%f", &numero);

    frac(numero, &parteInteira, &parteFracionaria);

    printf("\nParte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %.2f\n", parteFracionaria);

    return 0;
}