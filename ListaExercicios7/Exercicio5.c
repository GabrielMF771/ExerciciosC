#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float matriz[3][3] = {0};
    int i, j;

    printf("Imprimindo os Endereços de Cada Posição de uma Matriz\n\n");

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            printf("matriz[%d][%d] = %p\n", i, j, &matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}