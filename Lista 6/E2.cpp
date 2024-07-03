#include <iostream> // Inclui a biblioteca de entrada e sa�da padr�o.
#include <string>   // Inclui a biblioteca de manipula��o de strings.

using namespace std; // Permite o uso do espa�o de nomes padr�o (std) para evitar escrever "std::" repetidamente.

// Fun��o que verifica se um RA � v�lido.
bool RAvalido(const string& ra) {
    // Verifica se o tamanho do RA � 20 e se come�a com "RA".
    if (ra.size() != 20 || ra.substr(0, 2) != "RA") {
        return false; // Se n�o for, retorna false.
    }
    // Verifica se os caracteres ap�s "RA" s�o todos n�meros.
    for (int i = 2; i < 20; ++i) {
        if (ra[i] < '0' || ra[i] > '9') {
            return false; // Se algum caractere n�o for um n�mero, retorna false.
        }
    }
    
    return true; // Se todas as verifica��es passarem, retorna true.
}

// Fun��o que gera uma senha a partir de um RA.
string senha(const string& ra) {
    int pos = 2; // Inicia a posi��o em 2, pois os dois primeiros caracteres s�o "RA".
    // Avan�a a posi��o at� encontrar um d�gito diferente de zero.
    while (pos < 20 && ra[pos] == '0') {
        ++pos;
    }
    // Se todos os d�gitos ap�s "RA" forem zeros, retorna "0".
    if (pos == 20) {
        return "0";
    }
    // Caso contr�rio, retorna a substring do primeiro d�gito diferente de zero at� o final.
    return ra.substr(pos);
}

// Fun��o principal do programa.
int main() {
    int N; // Declara uma vari�vel para armazenar o n�mero de RAs.
    cin >> N; // L� o n�mero de RAs.
    
    cin.ignore(); // Ignora o caractere de nova linha ap�s a leitura de N.
    
    string ras[1000]; // Declara um array para armazenar at� 1000 RAs.
    
    // L� os N RAs.
    for (int i = 0; i < N; ++i) {
        getline(cin, ras[i]); // L� uma linha inteira e armazena no array.
    }
    
    // Processa cada RA.
    for (int i = 0; i < N; ++i) {
        if (RAvalido(ras[i])) { // Verifica se o RA � v�lido.
            cout << senha(ras[i]) << endl; // Se for v�lido, imprime a senha gerada.
        } else {
            cout << "INVALID DATA" << endl; // Se n�o for v�lido, imprime "INVALID DATA".
        }
    }
    
    return 0; // Indica que o programa terminou com sucesso.
}

