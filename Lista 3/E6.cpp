/* 6. Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é Equilátero, Isósceles ou Escaleno.
Sendo que: - Triângulo Equilátero: possui os 3 lados iguais. - Triângulo Isóscele: possui 2 lados iguais. - Triângulo Escaleno: possui 3 lados diferentes. */

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

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) { // regra básica para formação de um triângulo e para impedir que o programa dê erro

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

