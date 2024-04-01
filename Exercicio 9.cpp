/* 9 - O custo do aluguel de um automóvel é 1.75 reais por km até os primeiros 50 km, 1.65 reais por km para os 100 km seguintes e 1.50 reais por km acima de 150 km.
Escreva um programa que leia a distância em quilômetros e calcule o valor total a pagar e o custo médio por quilômetro.
*/

#include <iostream>
using namespace std;

int main() {
    double d, custo_total, custo_medio;

    cout << "Distancia percorrida: ";
    cin >> d;

    if (d <= 50) {
        custo_total = d * 1.75;
    } else if (d <= 100) {
        custo_total = 50 * 1.75 + (d - 50) * 1.65;
    } else {
        custo_total = 50 * 1.75 + 50 * 1.65 + (d - 100) * 1.50;
    }

    custo_medio = custo_total / d;

    cout << "Total a pagar: R$" << custo_total << endl;
    cout << "Custo medio por km: R$" << custo_medio << endl;

    return 0;
}

