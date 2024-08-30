#include <stdio.h>

int main() {
    double termos[10];
    double numeroInicial, razao;

    // Solicitar ao usuário o número inicial da P.G.
    printf("Digite o número inicial da P.G.: ");
    scanf("%lf", &numeroInicial);

    // Solicitar ao usuário a razão da P.G.
    printf("Digite a razão da P.G.: ");
    scanf("%lf", &razao);

    // Calcular e armazenar os 10 termos da P.G. no vetor
    termos[0] = numeroInicial;
    for (int i = 1; i < 10; i++) {
        termos[i] = termos[i - 1] * razao;
    }

    // Exibir o vetor resultante
    printf("Os 10 termos da P.G. são:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", termos[i]);
    }
    printf("\n");

    return 0;
}
