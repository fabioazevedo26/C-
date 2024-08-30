#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Informe o n�mero de lan�amentos do dado: ";
    cin >> n;

    vector<int> contagem(6, 0); // Inicializa um vetor de contagem com 6 elementos, todos iguais a zero

    cout << "Informe os resultados dos lan�amentos (1 a 6):" << endl;
    for (int i = 0; i < n; i++) {
        int resultado;
        cin >> resultado;

        if (resultado >= 1 && resultado <= 6) {
            contagem[resultado - 1]++; // Atualiza a contagem para o resultado do lan�amento
        } else {
            cout << "Resultado inv�lido. Ignorando..." << endl;
        }
    }

    cout << "N�mero de ocorr�ncias de cada face:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Face " << i + 1 << ": " << contagem[i] << " vezes" << endl;
    }

    return 0;
}
