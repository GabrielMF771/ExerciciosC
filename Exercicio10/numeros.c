#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    long *numeros;
    int num_elementos;
    int i;
    long maior_numero = 0;


    // Abre o arquivo binário para leitura
    arq = fopen("numeros.dat", "rb");
    if (arq == NULL) {
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }

    // Calcula o número de elementos no arquivo
    fseek(arq, 0, SEEK_END);
    long tamanho_arquivo = ftell(arq);
    rewind(arq);

    num_elementos = tamanho_arquivo / sizeof(long);

    // Aloca memória suficiente para armazenar todos os números
    numeros = (long *)malloc(num_elementos * sizeof(long));
    if (numeros == NULL) {
        printf("Erro de alocação de memória!\n");
        fclose(arq);
        return 1;
    }

    // Lê os números do arquivo
    fread(numeros, sizeof(long), num_elementos, arq);

    // Calcula o maior numero
    for (i = 0; i < num_elementos; i++) {
        if(numeros[i] > maior_numero){
            maior_numero = numeros[i];
        }
    }

    // Exibe os números lidos
    for (i = 0; i < num_elementos; i++) {
        printf("Numero %d: %ld\n",i + 1, numeros[i]);
    }

    // Exibe o maior numero
    printf("\nMaior Numero: %ld", maior_numero);
    printf("\n");
    
    // Exibe o numero de elementos
    printf("Numero de Elementos: %d", num_elementos);


    free(numeros);
    fclose(arq);
    return 0;
}
