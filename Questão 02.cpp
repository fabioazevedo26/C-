#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Informe o número de lançamentos do dado: ";
    cin >> n;

    vector<int> contagem(6, 0); // Inicializa um vetor de contagem com 6 elementos, todos iguais a zero

    cout << "Informe os resultados dos lançamentos (1 a 6):" << endl;
    for (int i = 0; i < n; i++) {
        int resultado;
        cin >> resultado;

        if (resultado >= 1 && resultado <= 6) {
            contagem[resultado - 1]++; // Atualiza a contagem para o resultado do lançamento
        } else {
            cout << "Resultado inválido. Ignorando..." << endl;
        }
    }

    cout << "Número de ocorrências de cada face:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Face " << i + 1 << ": " << contagem[i] << " vezes" << endl;
    }

    return 0;
}
