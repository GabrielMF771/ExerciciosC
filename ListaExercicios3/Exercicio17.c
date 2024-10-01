#include <stdio.h>

int main(){
    int i = 1, mercadoriaEstoque = 0;
    float valorMercadoria, somaValores = 0, mediaValores;
    char maisMercadoria;

    do{
        printf("\nDigite o valor da mercadoria %d: ", i);
        scanf("%f", &valorMercadoria);
        somaValores += valorMercadoria;
        i++;
        mercadoriaEstoque++;

        printf("\nMais mercadoria? (S/N): ");
        scanf(" %c", &maisMercadoria);
    }
    while(maisMercadoria == 'S');

    mediaValores = somaValores / mercadoriaEstoque;

    printf("\nNumero de mercadorias em estoque: %d\n", mercadoriaEstoque);
    printf("Valor total em estoque: R$%.2f\n", somaValores);
    printf("Media dos valores em estoque: R$%.2f\n", mediaValores);

    return 0;
}