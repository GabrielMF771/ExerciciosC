#include <stdio.h>

int main(){
    int horasTrabalhadas, horasExtras;
    float salarioTotal, salarioHora, valorHoraExtra;

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%d", &horasTrabalhadas);
    
    printf("Digite o salario por hora em reais: ");
    scanf("%f", &salarioHora);

    valorHoraExtra = salarioHora * 1.5;

    if(horasTrabalhadas > 160){
        horasExtras = horasTrabalhadas - 160;
        salarioTotal = (160 * salarioHora) + (horasExtras * valorHoraExtra);
    }
    else{
        horasExtras = 0;
        salarioTotal = horasTrabalhadas * salarioHora;
    }

    printf("O salario final e: R$%.2f\n", salarioTotal);    

    return 0;
}