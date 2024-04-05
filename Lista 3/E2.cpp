/* 2. Crie uma calculadora álcool x gasolina. O etanol vale a pena quando custar até 70% do valor da gasolina.
Como é feito o cálculo? Dividimos o valor do litro do álcool pelo da gasolina. Quando o resultado é menor que 0,7,
exiba uma recomendação dizendo para abastecer com álcool. Se for maior, exiba a recomendação para escolher a gasolina. */

#include <iostream>
using namespace std;

int main() {
    double alcool, gasolina;

    cout << "Preco do litro do alcool: ";
    cin >> alcool;
    cout << "Preco do litro da gasolina: ";
    cin >> gasolina;

    double etanol = alcool / gasolina;

    if (etanol < 0.7) {
        cout << "Alcool" << endl;
    } else {
        cout << "Gasolina" << endl;
    }

    return 0;
}


