#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int numAlunos = 15;
    vector<double> notasProva1(numAlunos);
    vector<double> notasProva2(numAlunos);
    vector<double> medias(numAlunos);

    // Preencha os vetores com as notas das provas
    for (int i = 0; i < numAlunos; i++) {
        cout << "Informe a nota da primeira prova para o aluno " << i + 1 << ": ";
        cin >> notasProva1[i];

        cout << "Informe a nota da segunda prova para o aluno " << i + 1 << ": ";
        cin >> notasProva2[i];

        // Calcule a média das notas e armazene no vetor de médias
        medias[i] = (notasProva1[i] + notasProva2[i]) / 2.0;
    }

    // Verifique se cada aluno foi aprovado ou reprovado
    for (int i = 0; i < numAlunos; i++) {
        if (medias[i] >= 6.0) {
            cout << "O aluno " << i + 1 << " foi Aprovado" << endl;
        } else {
            cout << "O aluno " << i + 1 << " foi Reprovado" << endl;
        }
    }

    return 0;
}
