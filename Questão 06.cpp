#include <stdio.h>

int main() {
    int termos[10];
    int valorInicial, constante;

    // Solicitar ao usu�rio o valor inicial da P.A.
    printf("Digite o valor inicial da P.A.: ");
    scanf("%d", &valorInicial);

    // Solicitar ao usu�rio a constante da P.A.
    printf("Digite a constante da P.A.: ");
    scanf("%d", &constante);

    // Calcular e armazenar os 10 termos da P.A. no vetor
    for (int i = 0; i < 10; i++) {
        termos[i] = valorInicial + (i * constante);
    }

    // Exibir o vetor resultante
    printf("Os 10 termos da P.A. s�o:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", termos[i]);
    }
    printf("\n");

    return 0;
}
