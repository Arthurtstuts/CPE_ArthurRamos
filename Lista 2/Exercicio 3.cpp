// 3 - Escreva um código que peça ao usuário fornecer o raio de um círculo e então imprima o diâmetro da circunferência e a área.
// Use a constante 3.14159 como sendo o valor de pi.

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r;
    
    // Solicita ao usuário o raio do círculo
    cout << "Digite o raio do circulo: ";
    cin >> r;
    
    // Calcula o diâmetro e a área do círculo
    double d = 2 * r;
    double A = PI * r * r;
    
    // Imprime o diâmetro e a área do círculo
    cout << "Diametro: " << d << endl;
    cout << "Area: " << A << endl;
    
    return 0;
}

