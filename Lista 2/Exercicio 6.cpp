// 6 - Escreva um código que lê dois números inteiros e imprime se o primeiro é múltiplo do segundo. (dica: use o operador módulo) 

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Primeiro numero (apenas inteiros): ";
    cin >> n1;

    cout << "Segundo numero (apenas inteiros): ";
    cin >> n2;


    if (n1 % n2 == 0) {
        cout << n1 << " e multiplo de " << n2 << endl;
    } else {
        cout << n1 << " nao e multiplo de " << n2 << endl;
    }

    return 0;
}

