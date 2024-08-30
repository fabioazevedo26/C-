#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicite ao usu�rio que insira um n�mero de 6 algarismos
    cout << "Digite um n�mero de 6 algarismos: ";
    cin >> numero;

    if (numero < 100000 || numero >= 1000000) {
        cout << "N�mero inv�lido. Deve ter 6 algarismos." << endl;
        return 1; // Saia do programa com c�digo de erro
    }

    int original = numero;
    int reverso = 0;

    // Inverta o n�mero
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Verifique se o n�mero � pal�ndromo
    if (original == reverso) {
        cout << "O n�mero " << original << " � um pal�ndromo." << endl;
    } else {
        cout << "O n�mero " << original << " n�o � um pal�ndromo." << endl;
    }

    return 0;
}
