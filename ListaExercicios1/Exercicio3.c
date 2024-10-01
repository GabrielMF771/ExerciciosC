#include <stdio.h>

int main()
{
    int anos, meses, dias, idadeEmDias;
   
    printf("Converter idade em dias\n\n");
   
    printf("Digite quantos anos de idade voce tem: ");
    scanf("%d", &anos);
   
    printf("Digite quantos meses de idade voce tem (sem contar os anos): ");
    scanf("%d", &meses);
   
    printf("Digite quantos dias de idade voce tem (sem contar os meses e os anos): ");
    scanf("%d", &dias);
   
    anos = anos * 365;
    meses = meses * 30;
   
    idadeEmDias = anos + meses + dias;
   
    printf("Sua idade em dias e: %d", idadeEmDias);
   

    return 0;
}