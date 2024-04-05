// 3 - Escreva um c�digo que pe�a ao usu�rio fornecer o raio de um c�rculo e ent�o imprima o di�metro da circunfer�ncia e a �rea.
// Use a constante 3.14159 como sendo o valor de pi.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r;
    
    // Solicita ao usu�rio o raio do c�rculo
    cout << "Digite o raio do circulo: ";
    cin >> r;
    
    // Calcula o di�metro e a �rea do c�rculo
    double d = 2 * r;
    double A = PI * r * r;
    
    // Imprime o di�metro e a �rea do c�rculo
    cout << "Diametro: " << d << endl;
    cout << "Area: " << A << endl;
    
    return 0;
}

