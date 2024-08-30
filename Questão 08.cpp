#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicite ao usuário que insira um número de 6 algarismos
    cout << "Digite um número de 6 algarismos: ";
    cin >> numero;

    if (numero < 100000 || numero >= 1000000) {
        cout << "Número inválido. Deve ter 6 algarismos." << endl;
        return 1; // Saia do programa com código de erro
    }

    int original = numero;
    int reverso = 0;

    // Inverta o número
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Verifique se o número é palíndromo
    if (original == reverso) {
        cout << "O número " << original << " é um palíndromo." << endl;
    } else {
        cout << "O número " << original << " não é um palíndromo." << endl;
    }

    return 0;
}
