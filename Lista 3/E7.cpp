/* 7. Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
Devem ser impressas as seguintes mensagens: ACESSO PERMITIDO caso a senha seja válida. ACESSO NEGADO caso a senha seja inválida. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string senha;

    cout << "Senha: ";
    cin >> senha;

    if (senha == "1234") {
        cout << "ACESSO PERMITIDO" << endl;
    } else {
        cout << "ACESSO NEGADO" << endl;
    }

    return 0;
}

