#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[101];
    size_t tamanho = 0, i;

    printf("C�lculo do Tamanho de uma String\n\n");

    printf("Digite a string a ser calculada o tamanho: ");
    scanf("%100[^\n]s", string);

    printf("\nC�lculo do tamanho usando strlen: %d\n", strlen(string));

    for(i = 0 ; i < 101 ; i++){
        if(string[i] == '\0'){
            break;
        }
        else {
            tamanho++;
        }
    }

    printf("C�lculo do tamanho sem utilizar strlen: %d\n", tamanho);

    if(strlen(string) > tamanho){
        printf("\nO tamanho utilizando strlen � maior!\n");
    } else if(strlen(string) < tamanho){
        printf("\nO tamanho utilizando strlen � menor!\n");
    } else{
        printf("\nO tamanho utilizando strlen � igual!\n");
    }

    return 0;
}