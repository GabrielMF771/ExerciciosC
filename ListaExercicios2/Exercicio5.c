#include <stdio.h>

int main(){
    int anoAtual, anoNascimento, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    if(idade >= 18){
        printf("Voce tem %d anos e podera votar esse ano.", idade);
    }
    else{
        printf("Voce tem %d anos e nao podera votar esse ano!", idade);
    }

    return 0;
}