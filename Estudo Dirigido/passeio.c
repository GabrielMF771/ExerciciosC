#include <stdio.h>

int main() {

    int tenhoCompromisso, vouEstarNaCidade, tenhoDinheiro, estaChovendo, ePerto;

    printf("Tenho compromisso no dia? (1-Sim, 0-Nao): ");
    scanf("%d", &tenhoCompromisso);
    printf("Vou estar na cidade? (1-Sim, 0-Nao): ");
    scanf("%d", &vouEstarNaCidade);
    printf("Tenho dinheiro? (1-Sim, 0-Nao): ");
    scanf("%d", &tenhoDinheiro);
    printf("Esta chovendo? (1-Sim, 0-Nao): ");
    scanf("%d", &estaChovendo);
    printf("E perto? (1-Sim, 0-Nao): ");
    scanf("%d", &ePerto);

    if (tenhoCompromisso == 0 && vouEstarNaCidade && tenhoDinheiro && (!estaChovendo || ePerto)) {
        printf("Eu vou!\n");
    } 

    else {
        printf("Nao vou!\n");
    }

    return 0;
}
