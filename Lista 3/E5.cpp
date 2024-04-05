// 5. Crie um programa que detecta se um caractere fornecido de entrada é uma vogal usando o comando switch case.

#include <iostream>
using namespace std;

int main() {
    char caractere;
    
    cout << "Caractere: ";
    cin >> caractere;
    
    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vogal" << endl;
            break;
        default:
            cout << "Consoante" << endl;
    }

    return 0;
}

