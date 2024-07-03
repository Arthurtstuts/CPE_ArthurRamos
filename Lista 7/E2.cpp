#include <iostream> // Inclui a biblioteca de entrada e saída padrão.
#include <string>   // Inclui a biblioteca de manipulação de strings.

using namespace std; // Permite o uso do espaço de nomes padrão (std) para evitar escrever "std::" repetidamente.

// Função que verifica se um RA é válido.
bool RAvalido(const string& ra) {
    // Verifica se o tamanho do RA é 20 e se começa com "RA".
    if (ra.size() != 20 || ra.substr(0, 2) != "RA") {
        return false; // Se não for, retorna false.
    }
    // Verifica se os caracteres após "RA" são todos números.
    for (int i = 2; i < 20; ++i) {
        if (ra[i] < '0' || ra[i] > '9') {
            return false; // Se algum caractere não for um número, retorna false.
        }
    }
    
    return true; // Se todas as verificações passarem, retorna true.
}

// Função que gera uma senha a partir de um RA.
string senha(const string& ra) {
    int pos = 2; // Inicia a posição em 2, pois os dois primeiros caracteres são "RA".
    // Avança a posição até encontrar um dígito diferente de zero.
    while (pos < 20 && ra[pos] == '0') {
        ++pos;
    }
    // Se todos os dígitos após "RA" forem zeros, retorna "0".
    if (pos == 20) {
        return "0";
    }
    // Caso contrário, retorna a substring do primeiro dígito diferente de zero até o final.
    return ra.substr(pos);
}

// Função principal do programa.
int main() {
    int N; // Declara uma variável para armazenar o número de RAs.
    cin >> N; // Lê o número de RAs.
    
    cin.ignore(); // Ignora o caractere de nova linha após a leitura de N.
    
    string ras[1000]; // Declara um array para armazenar até 1000 RAs.
    
    // Lê os N RAs.
    for (int i = 0; i < N; ++i) {
        getline(cin, ras[i]); // Lê uma linha inteira e armazena no array.
    }
    
    // Processa cada RA.
    for (int i = 0; i < N; ++i) {
        if (RAvalido(ras[i])) { // Verifica se o RA é válido.
            cout << senha(ras[i]) << endl; // Se for válido, imprime a senha gerada.
        } else {
            cout << "INVALID DATA" << endl; // Se não for válido, imprime "INVALID DATA".
        }
    }
    
    return 0; // Indica que o programa terminou com sucesso.
}

