#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Variaveis
    char numeros[11] = "0123456789";
    char minusculas[27] = {"abcdefghijklmnopqrstuvwxyz"};
    char maiusculas[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char senha[101];
    int temNumero = 0, temMaiuscula = 0, temMinuscula = 0;
    size_t i, j;

    printf("Criar senha!\n\n");
    printf("- Mínimo 8 caracteres\n");
    printf("- Pelo menos um número\n");
    printf("- Pelo menos uma letra maiúscula\n");
    printf("- Pelo menos uma letra minúscula\n");
    printf("- Máximo de 100 caracteres\n\n");

    printf("Digite a senha: ");
    scanf("%s", senha);

    //Mínimo de caracteres
    if(strlen(senha) < 8){
        printf("\nA senha deve ter pelo menos 8 caracteres!");
        return 1;
    }

    //Verificar se tem número
    for (i = 0; i < strlen(senha); i++) {
        for (j = 0; j < strlen(numeros); j++) { 
            if (senha[i] == numeros[j]) { 
                temNumero = 1;
                break;
            }
            if(temNumero){
                break;
            }
        }
    } if(temNumero == 0){
        printf("\nA senha precisa ter pelo menos um número!");
        return 1;
    }

    //Verificar se tem letra minúscula
    for (i = 0; i < strlen(senha); i++) {
        for (j = 0; j < strlen(minusculas); j++) { 
            if (senha[i] == minusculas[j]) { 
                temMinuscula = 1;
                break;
            }
            if(temMinuscula){
                break;
            }
        }
    } if(temMinuscula == 0){
        printf("\nA senha precisa ter pelo menos uma letra minúscula!");
        return 1;
    }

    //Verificar se tem letra maiúscula
    for (i = 0; i < strlen(senha); i++) {
        for (j = 0; j < strlen(maiusculas); j++) { 
            if (senha[i] == maiusculas[j]) { 
                temMaiuscula = 1;
                break;
            }
            if(temMaiuscula){
                break;
            }
        }
    } if(temMaiuscula == 0){
        printf("\nA senha precisa ter pelo menos uma letra maiúscula!");
        return 1;
    }

    //Máximo de caracteres
    if (strlen(senha) > 100) {
        printf("\nMáximo de caracteres atingido!");
        return 1;
    } else{
        printf("\nSENHA REGISTRADA COM SUCESSO!");
    }

    return 0;
}