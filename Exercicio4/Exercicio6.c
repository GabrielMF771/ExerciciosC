#include <stdio.h>

float Media(float n1, float n2, float n3, char parametro) {
    float media = 0.0; 

    switch (parametro) {
        case 'a': // Média aritmética
            media = (n1 + n2 + n3) / 3;
            break;
        case 'p': // Média ponderada
            media = ((n1 * 5.0) + (n2 * 3.0) + (n3 * 2.0)) / 10.0;
            break;
        case 'h': // Média harmônica
            media = 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
            break;
        default:
            printf("\nParametro invalido\n");
            break;
    }

    return media;
}

int main() {
    float n1, n2, n3, media;
    char parametro;

    printf("Media de Notas\n");

    printf("\nDigite a Nota 1: ");
    scanf("%f", &n1);

    printf("\nDigite a Nota 2: ");
    scanf("%f", &n2);

    printf("\nDigite a Nota 3: ");
    scanf("%f", &n3);

    printf("\nDigite o parametro (a = aritmetica, p = ponderada, h = harmonica): ");
    scanf(" %c", &parametro);

    media = Media(n1, n2, n3, parametro);

    if(parametro != 'a' || 'p' || 'h'){
        return 1;
    }

    printf("\nMedia: %.2f\n", media);

    return 0;
}
