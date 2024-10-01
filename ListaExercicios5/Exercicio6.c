#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, tamanhoVetor;
    
    printf("Soma de Vetores\n\n");

    printf("Digite o tamanho desejado para os vetores: ");
    scanf("%d", &tamanhoVetor);

    int a[tamanhoVetor], b[tamanhoVetor], soma[tamanhoVetor];

    //Vetor A
    printf("\nValores do Vetor A:\n");

    for(i = 0 ; i < tamanhoVetor ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &a[i]);
    }

    //Vetor B
    printf("\n\nValores do Vetor B:\n");

    for(i = 0 ; i < tamanhoVetor ; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &b[i]);
    }

    //Soma
    for(i = 0 ; i < tamanhoVetor ; i++){
        soma[i] = a[i] + b[i];
    }

    printf("\nVetor Soma = { ");
    for(i = 0 ; i < tamanhoVetor ; i++){
        printf("%d ", soma[i]);
    }
    printf("}\n");

    return 0;
}
