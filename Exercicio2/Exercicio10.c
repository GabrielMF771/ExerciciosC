#include <stdio.h>

int main(){
    char nome[20];
    float altura, pesoIdeal;
    char sexo;

    printf("Digite o seu nome: ");
    scanf(" %[^\n]", nome);
    
    printf("Digite o seu sexo (M ou F): ");
    scanf(" %c", &sexo);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'M'){
        pesoIdeal = (72.7 * altura) - 58;
    }
    else if(sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else{
        printf("Sexo invalido");
        return 1;
    }

    printf("Ola %s, seu peso ideal e %.2f", nome, pesoIdeal);

    return 0;
}