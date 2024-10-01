#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[101];
    int i;

    printf("Imprimindo uma String de Trás para Frente!\n\n");

    printf("Digite a string: ");
    scanf("%100[^\n]s", string);

    size_t tamanhoString = strlen(string);

    printf("\nString de trás para frente: ");
    for(i = tamanhoString ; i >= 0 ; i--){
        printf("%c", string[i]);
    }

    return 0;
}