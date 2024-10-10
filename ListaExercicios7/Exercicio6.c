#include <stdio.h>
#include <locale.h>

int temOcorrencia(char string1[], char string2[]){
    char *s1 = string1;
    char *s2 = string2;
    char *s1Inicio;

    for(; *s1 != '\0'; s1++){
        s1Inicio = s1;
        s2 = string2;

        while(*s1 == *s2 && *s2 != '\0'){
            s1++;
            s2++;
        }

        if(*s2 == '\0'){
            return 1;
        }

        s1 = s1Inicio;
    }

    return 0;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    char string1[] = "Bem-Vindo(a) Aluno(a)";
    char string2[] = "Bem-Vindo(a)";

    printf("Verificando a Ocorrência de uma String dentro de Outra String\n\n");

    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    printf("\nResultado:\n");
    if(temOcorrencia(string1, string2)){
        printf("Tem ocorrência!");
    } else {
        printf("Não tem ocorrência");
    }

    return 0;
}