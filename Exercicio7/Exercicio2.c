#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 0;

    printf("Imprimindo o Maior Endereço de uma Variável\n\n");

    if(&a > &b){
        printf("Endereço de A: %p", &a);
    } else {
        printf("Endereço de B: %p", &b);
    }

    return 0;
}