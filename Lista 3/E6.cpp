/* 6. Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva se ele � Equil�tero, Is�sceles ou Escaleno.
Sendo que: - Tri�ngulo Equil�tero: possui os 3 lados iguais. - Tri�ngulo Is�scele: possui 2 lados iguais. - Tri�ngulo Escaleno: possui 3 lados diferentes. */

#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;

    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;
    cout << "Lado 3: ";
    cin >> lado3;

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) { // regra b�sica para forma��o de um tri�ngulo e para impedir que o programa d� erro

        if (lado1 == lado2 && lado1 == lado3) {
            cout << "Equilatero." << endl;
        }

        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Isosceles." << endl;
        }

        else {
            cout << "Escaleno." << endl;
        }
    }
    else {
        cout << "Nao e possivel formar um triangulo" << endl;
    }

    return 0;
}

