#include <stdio.h>

int main(){
    int horaInicio, horaFinal, duracaoJogo;

    printf("Calculo da duracao em horas de um jogo de xadrez\n");

    printf("\nDigite a hora de inicio do jogo (desconsidere os minutos, digite a hora inteira): ");
    scanf("%d", &horaInicio);
    
    printf("Digite a hora de termino do jogo (desconsidere os minutos, digite a hora inteira): ");
    scanf("%d", &horaFinal);

    if (horaFinal >= horaInicio) {
        duracaoJogo = horaFinal - horaInicio;
    } else {
        duracaoJogo = (24 - horaInicio) + horaFinal;
    }

    if (duracaoJogo == 0) {
        duracaoJogo = 24;
    }

    printf("A duracao do jogo foi de %d horas.\n", duracaoJogo);

    return 0;
}