#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float array[10] = {0};
    int i;

    printf("Imprimindo os Endereços de Cada Posição de um Array\n\n");

    for(i = 0 ; i < 10 ; i++){
        printf("array[%d] = %p\n", i, &array[i]);
    }

    return 0;
}