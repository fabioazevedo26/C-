#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;
    int posicao_maior, posicao_menor;

    // Solicitar ao usu�rio que insira 10 n�meros
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializar o maior e o menor com o primeiro n�mero
    maior = menor = numeros[0];
    posicao_maior = posicao_menor = 0;

    // Verificar o maior e o menor n�mero, juntamente com suas posi��es
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
    printf("O maior n�mero � %d e est� na posi��o %d.\n", maior, posicao_maior);
    printf("O menor n�mero � %d e est� na posi��o %d.\n", menor, posicao_menor);

    return 0;
}
