#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 10;
    int vetor[tamanhoVetor];
    int n;
    int contador = 0;

    // Solicitar ao usuário que insira 10 números no vetor
    cout << "Digite 10 números:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Solicitar ao usuário que insira o número "n" a ser verificado
    cout << "Digite o número a ser verificado (n): ";
    cin >> n;

    // Verificar a quantidade de ocorrências de "n" no vetor
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == n) {
            contador++;
        }
    }

    // Exibir o resultado
    cout << "O número " << n << " ocorre " << contador << " vezes no vetor." << endl;

    return 0;
}
