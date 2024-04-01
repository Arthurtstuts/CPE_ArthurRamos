/* 5 - Escreva um programa que solicite ao usuário que digite a largura e o comprimento de uma sala. Após a leitura dos valores, seu programa deve calcular e exibir a área da sala.
O comprimento e a largura serão inseridos como números de ponto flutuante. Inclua unidades na sua mensagem de prompt e saída.
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

