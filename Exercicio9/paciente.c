#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "paciente.h"

void alocacao_paciente(paciente_t *paciente, char *nome, short idade){
    strncpy(paciente->nome, nome, sizeof(paciente->nome) - 1);
    paciente->nome[sizeof(paciente->nome) - 1] = '\0';

    paciente->idade = idade;

    int andar = (rand() % 5) + 1;
    int numLeito = (rand() % 10) + 1;
    paciente->leito = (andar * 100) + numLeito;

    printf("Paciente alocado:\n");
    printf("Nome: %s\n", paciente->nome);
    printf("Idade: %d\n", paciente->idade);
    printf("Leito: %d\n", paciente->leito);

}

int main(){
    paciente_t pacientes[10];

    srand(time(NULL));

    alocacao_paciente(&pacientes[1], "Gabriel", 18);
    printf("\n");
    alocacao_paciente(&pacientes[2], "Joao", 19);
    printf("\n");
    alocacao_paciente(&pacientes[3], "Pedro", 43);
    printf("\n");
    alocacao_paciente(&pacientes[4], "Augusto", 30);
    printf("\n");
    alocacao_paciente(&pacientes[5], "Matheus", 12);
    printf("\n");
    alocacao_paciente(&pacientes[6], "Julio", 34);
    printf("\n");
    alocacao_paciente(&pacientes[7], "Andre", 10);
    printf("\n");
    alocacao_paciente(&pacientes[8], "Felipe", 20);
    printf("\n");
    alocacao_paciente(&pacientes[9], "John", 24);
    printf("\n");
    alocacao_paciente(&pacientes[10], "Marcos", 22);

    return 0;
}