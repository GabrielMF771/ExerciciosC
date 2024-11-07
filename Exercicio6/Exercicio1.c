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
    printf("- M�nimo 8 caracteres\n");
    printf("- Pelo menos um n�mero\n");
    printf("- Pelo menos uma letra mai�scula\n");
    printf("- Pelo menos uma letra min�scula\n");
    printf("- M�ximo de 100 caracteres\n\n");

    printf("Digite a senha: ");
    scanf("%s", senha);

    //M�nimo de caracteres
    if(strlen(senha) < 8){
        printf("\nA senha deve ter pelo menos 8 caracteres!");
        return 1;
    }

    //Verificar se tem n�mero
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
        printf("\nA senha precisa ter pelo menos um n�mero!");
        return 1;
    }

    //Verificar se tem letra min�scula
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
        printf("\nA senha precisa ter pelo menos uma letra min�scula!");
        return 1;
    }

    //Verificar se tem letra mai�scula
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
        printf("\nA senha precisa ter pelo menos uma letra mai�scula!");
        return 1;
    }

    //M�ximo de caracteres
    if (strlen(senha) > 100) {
        printf("\nM�ximo de caracteres atingido!");
        return 1;
    } else{
        printf("\nSENHA REGISTRADA COM SUCESSO!");
    }

    return 0;
}