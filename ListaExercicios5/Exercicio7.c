#include <stdio.h>
#include <locale.h>

#define DIAS 365

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    int tempDia[DIAS], maiorTemp = 0, menorTemp = 0, tempMedia, menorQueMedia = 0, soma = 0;
    
    printf("Temperatura M?dia Anual\n\n");

    //Ler temperaturas
    for(i = 0 ; i < DIAS ; i++){
        printf("Digite a temperatura do dia %d: ", i+1);
        scanf("%d", &tempDia[i]);
        soma += tempDia[i];
    }

    // Inicializa??es
    tempMedia = soma/DIAS;
    menorTemp = tempDia[0];
    maiorTemp = tempDia[0];

    // Calcular maior e menor temperatura
    for(i = 0 ; i < DIAS ; i++){
        if(tempDia[i] < menorTemp){
            menorTemp = tempDia[i];
        }
        else if(tempDia[i] > maiorTemp){
            maiorTemp = tempDia[i];
        }
    }

    // Dias menor que a m?dia
    for(i = 0 ; i < DIAS ; i++){
        if(tempDia[i] < tempMedia){
            menorQueMedia++;
        }
    }

    // Prints
    printf("\nMenor temperatura do ano: %d ?C\n", menorTemp);
    printf("Maior temperatura do ano: %d ?C\n", maiorTemp);
    printf("Temperatura m?dia do ano: %d ?C\n", tempMedia);
    printf("N?mero de dias em que a temperatura foi menor do que a media: %d\n", menorQueMedia);

    return 0;
}
