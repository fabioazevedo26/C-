#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 10;
    int vetor[tamanhoVetor];
    int n;
    int contador = 0;

    // Solicitar ao usu�rio que insira 10 n�meros no vetor
    cout << "Digite 10 n�meros:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Solicitar ao usu�rio que insira o n�mero "n" a ser verificado
    cout << "Digite o n�mero a ser verificado (n): ";
    cin >> n;

    // Verificar a quantidade de ocorr�ncias de "n" no vetor
    for (int i = 0; i < tamanhoVetor; i++) {
        if (vetor[i] == n) {
            contador++;
        }
    }

    // Exibir o resultado
    cout << "O n�mero " << n << " ocorre " << contador << " vezes no vetor." << endl;

    return 0;
}
