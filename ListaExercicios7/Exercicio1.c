#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int inteiro = 30;
    float real = 7.5;
    char caractere = 'a';
    
    int *pInt = &inteiro;
    float *pReal = &real;
    char *pCaractere = &caractere;

    printf("Modificação de Valores Através de Ponteiros\n\n");

    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Caractere: %c\n", caractere);

    *pInt = 60;
    *pReal = 15.0;
    *pCaractere = 'b';

    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Caractere: %c\n", caractere);

}