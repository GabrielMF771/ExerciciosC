#include <stdio.h>
#include <math.h>

int DistanciaDoisPontos(float xa, float xb, float ya, float yb){
    return sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
}

int main(){
    float xa, xb, ya, yb, dist;

    printf("Distancia Euclidiana Entre Dois Pontos\n");

    printf("\nDigite o ponto xA: ");
    scanf("%f", &xa);

    printf("Digite o ponto yA: ");
    scanf("%f", &ya);

    printf("Digite o ponto xB: ");
    scanf("%f", &xb);

    printf("Digite o ponto yB: ");
    scanf("%f", &yb);

    dist = DistanciaDoisPontos(xa, xb, ya, yb);

    printf("\nA distancia entre os dois pontos e: %.2f", dist);
}