#include <stdio.h>

int main(){
    int i, mercadoriaEstoque;
    float valorMercadoria, somaValores = 0, mediaValores;

    printf("Digite o numero de mercadorias em estoque: ");
    scanf("%d", &mercadoriaEstoque);

    for(i = 1 ; i <= mercadoriaEstoque ; i++){
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valorMercadoria);
        somaValores += valorMercadoria;
    }

    mediaValores = somaValores / mercadoriaEstoque;

    printf("\nValor total em estoque: R$%.2f\n", somaValores);
    printf("Media dos valores em estoque: R$%.2f\n", mediaValores);

    return 0;
}