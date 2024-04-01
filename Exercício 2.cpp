// 2 - Escreva um código que peça ao usuário fornecer dois números e então imprima a soma, o produto a diferença e o quociente dos dois números.

#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    
    cout << "primeiro numero";
    cin >> n1;
    
    cout << "segundo numero:";
    cin >> n2;
    
    // Soma, produto e diferença
    cout << "Soma: " << (n1 + n2) << endl;
    cout << "Produto: " << (n1 * n2) << endl;
    cout << "Diferenca: " << (n1 - n2) << endl;
    
    // Cálculo do quociente (ele verifica se não é uma divisão por 0 antes)
    if (n2 != 0) {
        cout << "Quociente: " << (n1 / n2) << endl;
    } else {
        cout << "Nao e possivel dividir por zero." << endl;
    }
    
    return 0;
}
