/* 1. Motoristas se preocupam com a autonomia que seus carros fazem ao dirigir. Um motorista gravou o registro de quantos litros e quantos quilômetros seu carro fez para cada enchida no tanque.
Crie um código que receba como entrada a quantidade de litros e a quantidade de quilômetros percorrido pelo carro e calcule o consumo de cada tanque completado em km/litro.
Após processar todas as entradas, calcule e imprima a média do consumo que o carro fez. (=total de quilômetros percorrido dividido pelo total de gasolina consumida em litros). */

#include <iostream>
using namespace std;

int main() {
    double litros, km;

    cout << "Quantidade de litros consumidos: ";
    cin >> litros;

    cout << "Quantidade de quilometros percorridos: ";
    cin >> km;

    double consumo_tanque = km / litros;

    cout << "Consumo do tanque: " << consumo_tanque << " km/l" << endl;

    return 0;
}
