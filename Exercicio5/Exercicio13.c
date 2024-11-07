#include <stdio.h>
#include <locale.h>

#define TAM 10

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, j, contador[TAM] = {0}, vet[TAM];

    printf("Leitura do Vetor\n\n");
    
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    // Verifica n�meros repetidos
    for(i = 0 ; i < TAM ; i++) {
        for(j = i+1 ; j < TAM ; j++) {
            if(vet[i] == vet[j]) {
                contador[i]++;
            }
        }
    }

    printf("\n");

    // Exibe resultados
    for(i = 0 ; i < TAM ; i++) {
        if(contador[i] > 0) {
            printf("N�mero %d aparece %d vezes nas posi��es: ", vet[i], contador[i] + 1);
            printf("%d ", i + 1);
            for(j = i+1 ; j < TAM ; j++) {
                if(vet[i] == vet[j]) {
                    printf("%d ", j + 1);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
