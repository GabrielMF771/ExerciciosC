#include <stdio.h>
#include <locale.h>

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, j, vetor[11];

    printf("Ordenar Vetor em Ordem Crescente e Inserir um valor\n\n");

    for(i = 0 ; i < 10 ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Bubble Sort
    for(i = 0 ; i < 10 - 1; i++){
        for(j = 0 ; j < 10 - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }

    // Imprimir vetor ordenado
    printf("\nVetor Ordenado:\n");
    printf("{ ");

    for(i = 0 ; i < 10 ; i++){
        printf("%d ", vetor[i]);
    }

    printf("}");

    // Inserir um valor no vetor
    printf("\n\nDigite o valor a ser inserido no vetor: ");
    scanf("%d", &vetor[10]);

    // Bubble Sort 2
    for(i = 0 ; i < 11 - 1; i++){
        for(j = 0 ; j < 11 - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }

    // Imprimir vetor ordenado
    printf("\nVetor Ordenado Após a Inserção:\n");
    printf("{ ");

    for(i = 0 ; i < 11 ; i++){
        printf("%d ", vetor[i]);
    }

    printf("}\n");

    return 0;
}
