#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[101];
    char stringInversa[101];
    int i, j = 0;

    printf("Verificar se a String � um pal�ndromo!\n\n");

    printf("Digite a string: ");
    scanf("%100[^\n]s", string);

    size_t tamanhoString = strlen(string);

    for(i = tamanhoString  - 1; i >= 0 ; i--){
        stringInversa[j] = string [i];
        j++;
    }
    stringInversa[j] = '\0';

    printf("\nOriginal: %s", string);
    printf("\nInversa: %s\n", stringInversa);

    if (strcmp(string, stringInversa) == 0) {
        printf("\nA string � um pal�ndromo!\n");
    } else {
        printf("\nA string n�o � um pal�ndromo!\n");
    }

    return 0;
}