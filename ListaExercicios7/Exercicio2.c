#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 0;

    printf("Imprimindo o Maior Endere�o de uma Vari�vel\n\n");

    if(&a > &b){
        printf("Endere�o de A: %p", &a);
    } else {
        printf("Endere�o de B: %p", &b);
    }

    return 0;
}