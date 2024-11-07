#include <stdio.h>

int main()
{
    int totalDeEleitores, votosBrancos, votosNulos, votosValidos;
    float percentualNulos, percentualBrancos, percentualValidos;
   
    printf("Calculo da porcentagem de uma votacao\n\n");
   
    printf("Digite o total de eleitores: ");
    scanf("%d", &totalDeEleitores);
   
   
    printf("Digite o numero de votos em branco: ");
    scanf("%d", &votosBrancos);
   
   
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);
   
   
    printf("Digite o numerom de votos validos: ");
    scanf("%d", &votosValidos);
   
    percentualNulos = (float)votosNulos / totalDeEleitores * 100;
   
    percentualBrancos = (float)votosBrancos / totalDeEleitores * 100;
   
    percentualValidos = (float)votosValidos / totalDeEleitores * 100;
   
    printf("Percentual de votos nulos: %.2f%%\n", percentualNulos);
    printf("Percentual de votos brancos: %.2f%%\n", percentualBrancos);
    printf("Percentual de votos validos: %.2f%%\n", percentualValidos);
   
    return 0;
}
