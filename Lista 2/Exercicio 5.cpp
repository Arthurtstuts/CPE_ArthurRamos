/* 5 - Escreva um programa que solicite ao usu�rio que digite a largura e o comprimento de uma sala. Ap�s a leitura dos valores, seu programa deve calcular e exibir a �rea da sala.
O comprimento e a largura ser�o inseridos como n�meros de ponto flutuante. Inclua unidades na sua mensagem de prompt e sa�da.
*/

#include <iostream>
using namespace std;

int main() {
    double L, C;

    cout << "Largura (m): ";
    cin >> L;

    cout << "Comprimento (m): ";
    cin >> C;

    double A = L*C;

    cout << "Area da sala: " << A << " m^2 " << endl;

    return 0;
}

