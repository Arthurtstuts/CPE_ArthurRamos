// 6 - Escreva um c�digo que l� dois n�meros inteiros e imprime se o primeiro � m�ltiplo do segundo. (dica: use o operador m�dulo) 

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

