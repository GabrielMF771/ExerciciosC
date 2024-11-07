#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, j, vetor[20], valor, tamanho = 20;

    printf("Retirar um Valor do Vetor\n\n");

    printf("Vetor\n");
    for(i = 0 ; i < 20 ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Imprimir o vetor
    printf("\nVetor = { ");
    for(i = 0 ; i < tamanho ; i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    // Numero a ser retirado
    printf("\nDigite o valor a ser retirado: ");
    scanf("%d", &valor);


    // Remover o valor
    for(i = 0 ; i < tamanho ; i++){
        if(vetor[i] == valor){
            for(j = i ; j < tamanho - 1 ; j++){
                vetor[j] = vetor[j+1];
            }
            tamanho--;
            i--;
        }
    }

    printf("Vetor sem o valor retirado:\n");

    // Imprimir o vetor novamente
    printf("\nVetor = { ");
    for(i = 0 ; i < 19 ; i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    return 0;
}
