// 8 - Implemente um c�digo que solicite o valor de dois catetos para o usu�rio, realize o c�lculo e imprima o valor da hipotenusa. 

#include <iostream>
#include <cmath> // A fun��o 'sqrt' precisava dessa biblioteca
using namespace std;

int main() {
    double cateto1, cateto2, H;

    cout << "Primeiro cateto: ";
    cin >> cateto1;

    cout << "Segundo cateto: ";
    cin >> cateto2;

    H = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    // Exibe o valor da hipotenusa
    cout << "Hipotenusa: " << H << endl;

    return 0;
}

