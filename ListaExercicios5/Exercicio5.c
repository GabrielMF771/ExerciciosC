#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int i, numeros[20];

    for(i = 0 ; i < 20 ; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nString inversa: { ");

    for(i = 19 ; i >= 0 ; i--){
        printf("%d ", numeros[i]);
    }
    
    printf("}");

    return 0;
}
