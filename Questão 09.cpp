#include <stdio.h>

int main() {
    int primeiroVetor[5];
    int segundoVetor[5];
    int maiorValor = 0;

    // Solicite ao usuário que insira os valores do primeiro vetor
    printf("Digite os valores do primeiro vetor de 5 posições:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &primeiroVetor[i]);

        // Encontre o maior valor no primeiro vetor
        if (primeiroVetor[i] > maiorValor) {
            maiorValor = primeiroVetor[i];
        }
    }

    // Preencha o segundo vetor multiplicando cada valor pelo maior valor encontrado
    for (int i = 0; i < 5; i++) {
        segundoVetor[i] = primeiroVetor[i] * maiorValor;
    }

    // Exiba o segundo vetor resultante
    printf("O segundo vetor resultante é:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", segundoVetor[i]);
    }
    printf("\n");

    return 0;
}
