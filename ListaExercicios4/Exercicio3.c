#include <stdio.h>

int Potencia(int base, int expoente){
    int i;
    int resultado = 1;

    if(expoente == 0){
        return 1;
    }

    for(i = 1 ; i <= expoente ; i++){
        resultado *= base;
    }

    return resultado;
}

int main(){
    int base, expoente, resultado = 1;

    printf("Potenciacao\n");
    
    printf("\nDigite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = Potencia(base, expoente);

    printf("\nO resultado e: %d", resultado);
}