#include <stdio.h>

int main(){
    int i, soma = 0, contador = 0;
    float media;

    for(i = 15 ; i <= 100 ; i++){
        soma += i;
        contador ++;
    }

    media = (float)soma / contador;

    printf("A media aritmetica dos numeros entre 15 e 100 e: %.2f\n", media);

    return 0;
}