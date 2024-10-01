#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, maiorElemento = 0, posicao, Q[20];

    printf("Vetor Q (apenas inteiros positivos)\n\n");

    for(i = 0 ; i < 20 ; i++){
        printf("Digite o valor %d (posição %d): ", i+1, i);
        scanf("%d", &Q[i]);

        if(Q[i] < 0){
            printf("Valor inválido!\n");
            return 1;
        }
    }

    for(i = 0 ; i < 20 ; i++){
        if(Q[i] > maiorElemento){
            maiorElemento = Q[i];
            posicao = i;
        }
    }
    printf("\nO maior elemento e %d e a sua posicao no vetor Q e %d", maiorElemento, posicao);

    return 0;

}