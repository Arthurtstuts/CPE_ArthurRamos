#include <iostream>
#include <string>

using namespace std;

string decifrarmensagem(const string& mensagem) {
    string msgoculta;
    for (size_t i = 0; i < mensagem.length(); i += 2) {
        msgoculta += mensagem[i];
    }
    return msgoculta;
}

int main() {
    int C;
    cin >> C;
    cin.ignore();
    
    for (int i = 0; i < C; ++i) {
        string mensagem;
        getline(cin, mensagem);
        cout << decifrarmensagem(mensagem) << endl;
    }
    
    return 0;
}
