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

    printf("Modifica��o de Valores Atrav�s de Ponteiros\n\n");

    printf("Valores antes da modifica��o:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Caractere: %c\n", caractere);

    *pInt = 60;
    *pReal = 15.0;
    *pCaractere = 'b';

    printf("\nValores ap�s a modifica��o:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.1f\n", real);
    printf("Caractere: %c\n", caractere);

}