#include <stdio.h>
#include "nascimento.h"

int dias_no_mes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
            return dias[mes - 1] + 1;
        }
    }
    return dias[mes - 1];
}

int dias_de_vida(data_t nasc, data_t hoje){
    int dias = 0, ano, i;

    for(ano = nasc.ano ; ano < hoje.ano ; ano++){
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
            dias += 366;
        } else {
            dias += 365;
        }
    }

    for (i = 1; i < nasc.mes; i++) {
        dias -= dias_no_mes(i, nasc.ano);
    }
    dias -= nasc.dia;

    for (i = 1; i < hoje.mes; i++) {
        dias += dias_no_mes(i, hoje.ano);
    }
    dias += hoje.dia;

    return dias;
}

int main(){
    data_t nasc;
    data_t hoje;

    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &nasc.dia, &nasc.mes, &nasc.ano);

    printf("\nDigite a data de hoje (dd mm aaaa): ");
    scanf("%d %d %d", &hoje.dia, &hoje.mes, &hoje.ano);

    int dias = dias_de_vida(nasc, hoje);

    printf("\nVoce tem %d dias de vida desde o seu nascimento!", dias);

    return 0;
}