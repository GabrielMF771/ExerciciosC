#include <stdio.h>
#include <locale.h>

#define TAM 30

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, num, contador, v1[TAM];

    printf("Leitura do Vetor\n\n");
    
    for(i = 0 ; i < TAM ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v1[i]);
    }

    printf("\nDigite o número desejado: ");
    scanf("%d", &num);

    for(i = 0 ; i < TAM ; i++){
        if(v1[i] == num){
            contador++;
        }
    }

    printf("\nNúmero de vezes que o número aparece no vetor: %d\n", contador);

    return 0;
}
