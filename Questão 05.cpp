#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;
    int posicao_maior, posicao_menor;

    // Solicitar ao usuário que insira 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializar o maior e o menor com o primeiro número
    maior = menor = numeros[0];
    posicao_maior = posicao_menor = 0;

    // Verificar o maior e o menor número, juntamente com suas posições
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao_maior = i;
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao_menor = i;
        }
    }

    // Exibir os resultados
    printf("O maior número é %d e está na posição %d.\n", maior, posicao_maior);
    printf("O menor número é %d e está na posição %d.\n", menor, posicao_menor);

    return 0;
}
