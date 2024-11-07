#include <stdio.h>

int main(){
    int quantAtual, quantMax, quantMin, quantMedia;

    printf("Digite a quantidade MAXIMA do produto em estoque: ");
    scanf("%d", &quantMax);
    
    printf("Digite a quantidade MINIMA do produto em estoque: ");
    scanf("%d", &quantMin);
    
    printf("Digite a quantidade ATUAL do produto em estoque: ");
    scanf("%d", &quantAtual);

    quantMedia = (quantMax + quantMin) / 2;

    printf("\nA quantidade atual e %d\n", quantAtual);
    printf("A quantidade media e %d\n", quantMedia);

    if(quantAtual >= quantMedia){
        printf("Nao efetuar a compra!\n");
    }
    else{
        printf("Efetuar a compra!\n");
    }

    return 0;
}