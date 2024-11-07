#include <stdio.h>
#include <locale.h>

#define TAMANHO_TURMA 20

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float notas[TAMANHO_TURMA];
    float soma = 0, media;
    int i, contagem_acima_media = 0;

    for (i = 0; i < TAMANHO_TURMA; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / TAMANHO_TURMA;

    for (i = 0; i < TAMANHO_TURMA; i++) {
        if (notas[i] > media) {
            contagem_acima_media++;
        }
    }

    printf("\nMédia da turma: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", contagem_acima_media);

    return 0;
}
