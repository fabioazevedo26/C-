#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 12;
    int vetor[tamanhoVetor];
    int x, y;

    // Solicitar ao usu�rio que insira os valores no vetor
    cout << "Digite " << tamanhoVetor << " valores para o vetor:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Solicitar ao usu�rio que insira os valores de X e Y
    cout << "Digite o valor de X (entre 0 e " << tamanhoVetor - 1 << "): ";
    cin >> x;
    cout << "Digite o valor de Y (entre 0 e " << tamanhoVetor - 1 << "): ";
    cin >> y;

    // Verificar se X e Y est�o dentro do intervalo v�lido
    if (x >= 0 && x < tamanhoVetor && y >= 0 && y < tamanhoVetor) {
        int soma = vetor[x] + vetor[y];
        cout << "A soma dos valores nas posi��es " << x << " e " << y << " �: " << soma << endl;
    } else {
        cout << "Valores de X e/ou Y est�o fora do intervalo v�lido." << endl;
    }

    return 0;
}
