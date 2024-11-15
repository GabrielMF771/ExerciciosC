#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pediatria.h"

paciente_t * primeiro_paciente(char *nome, int idade, float peso, float altura, char genero){
    paciente_t * primeiro_paciente = (paciente_t*)malloc(sizeof(paciente_t));

    if(primeiro_paciente == NULL){
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    strcpy(primeiro_paciente->nome, nome);
    primeiro_paciente->idade = idade;
    primeiro_paciente->peso = peso;
    primeiro_paciente->altura = altura;
    primeiro_paciente->genero = genero;
    primeiro_paciente->prox = NULL;

    return primeiro_paciente;
}

void novo_paciente(paciente_t *primeiro, char *nome, int idade, float peso, float altura, char genero){
    paciente_t *atual = primeiro;

    while(atual->prox != NULL){
        atual = atual->prox;
    }

    paciente_t * novo_paciente = (paciente_t*)malloc(sizeof(paciente_t));

    if(novo_paciente == NULL){
        printf("Erro ao alocar memoria!");
        exit(1);
    }

    strcpy(novo_paciente->nome, nome);
    novo_paciente->idade = idade;
    novo_paciente->peso = peso;
    novo_paciente->altura = altura;
    novo_paciente->genero = genero;
    novo_paciente->prox = NULL;

    atual->prox = novo_paciente;
}

IMCInfantil calcula_imc(paciente_t *crianca){
    float imc = crianca->peso / (crianca->altura * crianca->altura);
    int idade = crianca->idade;
    char genero = crianca->genero;

    if(idade >= 6 && idade <= 15){
        if(genero == 'H' || genero == 'h'){
                if((idade == 6 && imc <= 14.5) || (idade == 7 && imc <= 15.0) || 
                (idade == 8 && imc <= 15.6) || (idade == 9 && imc <= 16.1) || 
                (idade == 10 && imc <= 16.7) || (idade == 11 && imc <= 17.2) || 
                (idade == 12 && imc <= 17.8) || (idade == 13 && imc <= 18.5) || 
                (idade == 14 && imc <= 19.2) || (idade == 15 && imc <= 19.9)) {
                    return ABAIXO;
                }
                else if ((idade == 6 && imc >= 14.5 && imc <= 16.6) || (idade == 7 && imc >= 15.0 && imc <= 17.3) ||
                (idade == 8 && imc >= 15.6 && imc <= 16.7) || (idade == 9 && imc >= 16.1 && imc <= 18.8) ||
                (idade == 10 && imc >= 16.7 && imc <= 19.6) || (idade == 11 && imc >= 17.2 && imc <= 20.3) || 
                (idade == 12 && imc >= 17.8 && imc <= 21.1) || (idade == 13 && imc >= 18.5 && imc <= 21.9) || 
                (idade == 14 && imc >= 19.2 && imc <= 22.7) || (idade == 15 && imc >= 19.9 && imc <= 23.6)){
                    return NORMAL;
                }
                else if ((idade == 6 && imc >= 16.7 && imc <= 18.0) || (idade == 7 && imc >= 17.4 && imc <= 19.1) ||
                (idade == 8 && imc >= 16.8 && imc <= 20.3) || (idade == 9 && imc >= 18.9 && imc <= 21.4) ||
                (idade == 10 && imc >= 19.7 && imc <= 22.5) || (idade == 11 && imc >= 20.4 && imc <= 23.7) ||
                (idade == 12 && imc >= 21.2 && imc <= 24.8) || (idade == 13 && imc >= 22.0 && imc <= 25.9) || 
                (idade == 14 && imc >= 22.8 && imc <= 26.9) || (idade == 15 && imc >= 23.7 && imc <= 27.7)){
                    return SOBREPESO;
                }
                else {
                    return OBESIDADE;
                }
        } else if (genero == 'M' || genero == 'm'){
            if((idade == 6 && imc <= 14.3) || (idade == 7 && imc <= 14.9) || 
                (idade == 8 && imc <= 15.6) || (idade == 9 && imc <= 16.3) || 
                (idade == 10 && imc <= 17.0) || (idade == 11 && imc <= 17.6) || 
                (idade == 12 && imc <= 18.3) || (idade == 13 && imc <= 18.9) || 
                (idade == 14 && imc <= 19.3) || (idade == 15 && imc <= 19.6)) {
                    return ABAIXO;
                }
                else if ((idade == 6 && imc >= 14.3 && imc <= 16.1) || (idade == 7 && imc >= 14.9 && imc <= 17.1) ||
                (idade == 8 && imc >= 15.6 && imc <= 18.1) || (idade == 9 && imc >= 16.3 && imc <= 19.1) ||
                (idade == 10 && imc >= 17.0 && imc <= 20.1) || (idade == 11 && imc >= 17.6 && imc <= 21.1) || 
                (idade == 12 && imc >= 18.2 && imc <= 22.1) || (idade == 13 && imc >= 18.9 && imc <= 23.0) || 
                (idade == 14 && imc >= 19.3 && imc <= 23.8) || (idade == 15 && imc >= 19.6 && imc <= 24.2)){
                    return NORMAL;
                }
                else if ((idade == 6 && imc >= 16.2 && imc <= 17.4) || (idade == 7 && imc >= 17.2 && imc <= 18.9) ||
                (idade == 8 && imc >= 18.2 && imc <= 20.3) || (idade == 9 && imc >= 19.2 && imc <= 21.7) ||
                (idade == 10 && imc >= 20.2 && imc <= 23.2) || (idade == 11 && imc >= 21.2 && imc <= 24.5) ||
                (idade == 12 && imc >= 22.2 && imc <= 25.9) || (idade == 13 && imc >= 23.1 && imc <= 27.7) || 
                (idade == 14 && imc >= 23.9 && imc <= 27.9) || (idade == 15 && imc >= 24.3 && imc <= 28.8)){
                    return SOBREPESO;
                }
                else {
                    return OBESIDADE;
                }
        }
    } else {
        printf("A idade precisa estar entre 6 e 15 anos!");
        return 1;
    }
}