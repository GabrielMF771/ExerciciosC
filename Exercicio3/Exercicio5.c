#include <stdio.h>

int main(){
    float nota1, nota2, mediaFinal;

    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);


        if(nota1 > 10 || nota2 > 10){
            printf("Apenas valores menores do que 10 sao aceitos!\n\n");
        }
    }
    while(nota1 > 10 || nota2 > 10);

    mediaFinal = (nota1 + nota2) / 2;

    printf("A media final e: %.1f", mediaFinal);
    return 0;
}