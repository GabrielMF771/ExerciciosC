#include <stdio.h>
#include <locale.h>

#define TAM 15

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, numIgual, v1[TAM], v2[TAM];

    printf("Leitura do Vetor 1\n\n");
    
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("\nLeitura do Vetor 2\n\n");
    
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v2[i]);
    }
    
    for(i = 0 ; i < TAM ; i++){
        if(v1[i] == v2[i]){
            numIgual++;
        }
    }

    printf("\nNúmero de vezes que V1 e V2 possuem o mesmo número na mesma posição: %d", numIgual);

    return 0;
}
