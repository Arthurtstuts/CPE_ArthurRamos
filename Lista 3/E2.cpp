/* 2. Crie uma calculadora �lcool x gasolina. O etanol vale a pena quando custar at� 70% do valor da gasolina.
Como � feito o c�lculo? Dividimos o valor do litro do �lcool pelo da gasolina. Quando o resultado � menor que 0,7,
exiba uma recomenda��o dizendo para abastecer com �lcool. Se for maior, exiba a recomenda��o para escolher a gasolina. */

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


