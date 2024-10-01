#include <stdio.h>

int VerificaSinal(int a){
    if(a > 0){
        return 1;
    }
    else if(a == 0){
        return 0;
    }
    else{
        return -1;
    }
}

int main(){
    int numero;

    printf("Verificar o Sinal de um Numero\n");

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    int resultado = VerificaSinal(numero);

    if(resultado == 1){
        printf("\nO numero e positivo");
    }
    else if (resultado == -1){
        printf("\nO numero e negativo");
    }
    else{
        printf("\nO numero e zero");
    }
}