#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int frequencia;
    float nota;
}aluno_t;

int main(){
    aluno_t *aluno;
	aluno = (aluno_t *) malloc(sizeof(aluno_t));

    if(aluno == NULL){
        printf("Erro de memoria!\n");
        exit(1);
    }

	printf("Nome do aluno: ");
	scanf(" %[^\n]s", aluno->nome);
    fflush(stdin);

	printf("Frequencia (em porcentagem): ");
	scanf("%d", &aluno->frequencia);
	fflush(stdin);

	printf("Nota final: ");
	scanf("%f", &aluno->nota);
	fflush(stdin);

    if(aluno->nota >= 7 && aluno->frequencia >= 75){
        printf("\n%s foi aprovado!\n", aluno->nome);
    } else {
        printf("\n%s foi reprovado!\n", aluno->nome);
    }
}