/* 10 - Escreva um algoritmo que solicite ao usuário que digite uma String com 5 caracteres e calcule quantas vezes e quais vogais aparecem nesta String.
Mostre na tela estes dois resultados. Depois utilize o seguinte código de criptografia que modifica a vogal ´a´ por ´i´,a vogal ´e´ por ´o´ e a vogal ´i´ por ´u´
e faça as devidas alterações na String . Mostre na tela a nova String criptografada.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada;
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;

    cout << "Digite uma mensagem com 5 caracteres: ";
    cin >> entrada;

    if (entrada.length() != 5) {
        cout << "A mensagem digitada nao tem 5 caracteres." << endl;
        return 1;
    }

    for (int i = 0; i < entrada.length(); ++i) {
        char c = entrada[i];
        if (c == 'a') {
            count_a++;
        } else if (c == 'e') {
            count_e++;
        } else if (c == 'i') {
            count_i++;
        } else if (c == 'o') {
            count_o++;
        } else if (c == 'u') {
            count_u++;
        }
    }

    cout << "Quantidade de vogais:" << endl;
    cout << "a: " << count_a << endl;
    cout << "e: " << count_e << endl;
    cout << "i: " << count_i << endl;
    cout << "o: " << count_o << endl;
    cout << "u: " << count_u << endl;

    for (int i = 0; i < entrada.length(); ++i) {
        char &c = entrada[i];
        if (c == 'a') {
            c = 'i';
        } else if (c == 'e') {
            c = 'o';
        } else if (c == 'i') {
            c = 'u';
        }
    }

    cout << "Mensagem criptografada: " << entrada << endl;

    return 0;
}
