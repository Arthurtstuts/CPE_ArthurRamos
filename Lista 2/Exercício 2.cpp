// 2 - Escreva um c�digo que pe�a ao usu�rio fornecer dois n�meros e ent�o imprima a soma, o produto a diferen�a e o quociente dos dois n�meros.

#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    
    cout << "primeiro numero";
    cin >> n1;
    
    cout << "segundo numero:";
    cin >> n2;
    
    // Soma, produto e diferen�a
    cout << "Soma: " << (n1 + n2) << endl;
    cout << "Produto: " << (n1 * n2) << endl;
    cout << "Diferenca: " << (n1 - n2) << endl;
    
    // C�lculo do quociente (ele verifica se n�o � uma divis�o por 0 antes)
    if (n2 != 0) {
        cout << "Quociente: " << (n1 / n2) << endl;
    } else {
        cout << "Nao e possivel dividir por zero." << endl;
    }
    
    return 0;
}
