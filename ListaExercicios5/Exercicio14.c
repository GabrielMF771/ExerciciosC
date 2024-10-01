#include <stdio.h>
#include <locale.h>

#define TAM 3

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int mat[TAM][TAM];
    int determinante;

    // Leitura da matriz 3x3
    printf("Digite os valores da matriz 3x3:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    // Cálculo do determinante
    determinante = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1])
                 - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0])
                 + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);

    // Exibe o determinante
    printf("\nO determinante da matriz é: %d\n", determinante);

    return 0;
}
