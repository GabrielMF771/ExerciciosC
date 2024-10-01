#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, A[10], M[10], X;

    printf("Valores do Vetor A\n\n");

    for(i = 0 ; i < 10 ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite o fator multiplicador: ");
    scanf("%d", &X);

    for(i = 0 ; i < 10 ; i++){
        M[i] = A[i] * X;
    }

    printf("\nVetor M = { ");
    for(i = 0 ; i < 10 ; i++){
        printf("%d ", M[i]);
    }

    printf("}");

    return 0;
}
