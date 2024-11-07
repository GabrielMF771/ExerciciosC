#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 10){
        printf("E MAIOR QUE 10!");
    }
    else{
        printf("NAO E MAIOR QUE 10!");
    }

    return 0;
}