#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[101];
    int i;

    printf("Imprimindo uma String de Tr�s para Frente!\n\n");

    printf("Digite a string: ");
    scanf("%100[^\n]s", string);

    size_t tamanhoString = strlen(string);

    printf("\nString de tr�s para frente: ");
    for(i = tamanhoString ; i >= 0 ; i--){
        printf("%c", string[i]);
    }

    return 0;
}