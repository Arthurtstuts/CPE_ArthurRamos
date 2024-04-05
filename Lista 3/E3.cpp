/* 3. Pal�ndromo � um n�mero ou texto que se l� da mesma maneira de tr�s para frente ou de frente para tr�s.
Por exemplo, cada um dos d�gitos a seguir � um palindrome: 12321, 55555, 45554 and 11611.
Escreva um c�digo que l� cinco d�gitos inteiros e determina se � um pal�ndromo.
(Dica: use a divis�o e o operador m�dulo para separar o n�mero em seus d�gitos individuais) */

#include <iostream>
using namespace std;

int main() {
    int numeros, digito1, digito2, digito4, digito5; // digito 3 n�o � necess�rio porque � o termo do meio

    cout << "Insira cinco digitos: ";
    cin >> numeros;

    digito1 = numeros / 10000; // 'digito1' foi declrado como n�meoro inteiro na linha 10, ao dividir por 10000 a parte fracion�ria � descartada e resta apenas o primeiro d�gito
    digito2 = (numeros / 1000) % 10; // ap�s dividir por 1000 resta um n�mero com duas casas decimais, dividindo por '10' com o operador '%' deixa um resto de divis�o equivalente ao 2o d�gito
    digito4 = (numeros / 10) % 10; // mesmo processo do d�gito 2, mas agora restar� um n�mero inteiro com 4 casas decimais em que a �ltima casa � o 4o d�gito
    digito5 = numeros % 10; // mesmo processo

    // Verifica se o n�mero � um pal�ndromo
    if (digito1 == digito5 && digito2 == digito4) {
        cout << numeros << " e um palindromo." << endl;
    } else {
        cout << numeros << " nao e um palindromo." << endl;
    }

    return 0;
}

