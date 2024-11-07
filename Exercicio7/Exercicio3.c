#include <stdio.h>
#include <locale.h>

void troca(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorA, valorB;

    printf("Troca de Variáveis Através de Ponteiros\n\n");

    printf("Digite o valor da variavel A: ");
    scanf("%d", &valorA);
    
    printf("Digite o valor da variavel B: ");
    scanf("%d", &valorB);

    troca(&valorA, &valorB);

    printf("\nVariaveis após a troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}