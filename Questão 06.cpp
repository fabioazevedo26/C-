#include <stdio.h>

int main() {
    int termos[10];
    int valorInicial, constante;

    // Solicitar ao usuário o valor inicial da P.A.
    printf("Digite o valor inicial da P.A.: ");
    scanf("%d", &valorInicial);

    // Solicitar ao usuário a constante da P.A.
    printf("Digite a constante da P.A.: ");
    scanf("%d", &constante);

    // Calcular e armazenar os 10 termos da P.A. no vetor
    for (int i = 0; i < 10; i++) {
        termos[i] = valorInicial + (i * constante);
    }

    // Exibir o vetor resultante
    printf("Os 10 termos da P.A. são:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", termos[i]);
    }
    printf("\n");

    return 0;
}
