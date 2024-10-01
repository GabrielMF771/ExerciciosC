#include <stdio.h>
#include <locale.h>

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, j, vetor[10];

    printf("Ordenar Vetor em Ordem Crescente\n\n");

    for(i = 0 ; i < 10 ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //Bubble Sort
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

    return 0;
}
