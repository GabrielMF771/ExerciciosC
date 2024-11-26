#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
}aluno_t;

int main(){
    aluno_t *aluno;
	aluno = (aluno_t *) malloc(sizeof(aluno_t));

    if(aluno == NULL){
        printf("Erro de memoria!\n");
        exit(1);
    }

    strcpy(aluno->nome, "Gabriel");
    aluno->faltas = 5;
    aluno->nota = 8.5;

    printf("Estudante %s\nFaltas: %d\nNota: %.2f\nSituacao: %s", aluno->nome, aluno->faltas, aluno->nota, aluno->faltas < 15 && aluno->nota >= 7 ? "Aprovado" : "Reprovado");
}