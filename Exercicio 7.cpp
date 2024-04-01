// 7 - Implemente um c�digo que solicite do usu�rio um n�mero inteiro e mostre na tela se o n�mero � primo ou n�o.

#include <iostream>
using namespace std;

int main() {
    int n;
    bool ePrimo = true;

    cout << "Digite o numero (inteiro, positivo e maior que 1): ";
    cin >> n;

    if (n <= 1) {
        cout << n << " nao e primo." << endl;
        return 0;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            ePrimo = false;
            break;
        }
    }

    if (ePrimo) {
        cout << n << " e primo." << endl;
    } else {
        cout << n << " nao e primo." << endl;
    }

    return 0;
}

