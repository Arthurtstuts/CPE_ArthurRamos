/* 3. Palíndromo é um número ou texto que se lê da mesma maneira de trás para frente ou de frente para trás.
Por exemplo, cada um dos dígitos a seguir é um palindrome: 12321, 55555, 45554 and 11611.
Escreva um código que lê cinco dígitos inteiros e determina se é um palíndromo.
(Dica: use a divisão e o operador módulo para separar o número em seus dígitos individuais) */

#include <iostream>
using namespace std;

int main() {
    int numeros, digito1, digito2, digito4, digito5; // digito 3 não é necessário porque é o termo do meio

    cout << "Insira cinco digitos: ";
    cin >> numeros;

    digito1 = numeros / 10000; // 'digito1' foi declrado como númeoro inteiro na linha 10, ao dividir por 10000 a parte fracionária é descartada e resta apenas o primeiro dígito
    digito2 = (numeros / 1000) % 10; // após dividir por 1000 resta um número com duas casas decimais, dividindo por '10' com o operador '%' deixa um resto de divisão equivalente ao 2o dígito
    digito4 = (numeros / 10) % 10; // mesmo processo do dígito 2, mas agora restará um número inteiro com 4 casas decimais em que a última casa é o 4o dígito
    digito5 = numeros % 10; // mesmo processo

    // Verifica se o número é um palíndromo
    if (digito1 == digito5 && digito2 == digito4) {
        cout << numeros << " e um palindromo." << endl;
    } else {
        cout << numeros << " nao e um palindromo." << endl;
    }

    return 0;
}

