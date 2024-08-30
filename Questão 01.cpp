#include <iostream>
#include <string>

using namespace std;

int calcularNota(const string& gabarito, const string& respostasAluno) {
    if (gabarito.length() != respostasAluno.length()) {
        cout << "Erro: O número de questões no gabarito e no cartão de respostas não coincide." << endl;
        return -1; // Retorna -1 para indicar erro
    }

    int nota = 0;

    for (size_t i = 0; i < gabarito.length(); i++) {
        if (gabarito[i] == respostasAluno[i]) {
            nota += 10; // A resposta está correta, adiciona 10 pontos à nota
        }
    }

    return nota;
}

int main() {
    string gabarito, respostasAluno;

    cout << "Informe o gabarito da prova (ex: ABCDEABCDE): ";
    cin >> gabarito;

    cout << "Informe as respostas do aluno (ex: ABBEDDACBC): ";
    cin >> respostasAluno;

    int nota = calcularNota(gabarito, respostasAluno);

    if (nota != -1) {
        cout << "A nota do aluno é: " << nota << " pontos." << endl;
    }

    return 0;
}
