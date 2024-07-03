#include <iostream>
#include <string>

using namespace std;
 
string padrao(const string& linha, const string padrao1[], const string padrao2[], int M) {
    string novalinha;
    size_t comprimento = linha.length();
    for (size_t i = 0; i < comprimento; ++i) {
        string grupo;
        while (i < comprimento && (grupo.empty() || linha[i] == grupo[0])) {
            grupo += linha[i];
            ++i;
        }
        --i;

        for (int j = 0; j < M; ++j) {
            if (padrao1[j] == grupo) {
                novalinha += padrao2[j];
                break;
            }
        }
    }
    return novalinha;
}

int main() {
    int N, M;
    cin >> N >> M;
    cin.ignore();

    string padrao1[200];
    string padrao2[200];

    for (int i = 0; i < M; ++i) {
        cin >> padrao1[i] >> padrao2[i];
    }

    string linha = "A";
    for (int segundo = 0; segundo < N; ++segundo) {
        linha = padrao(linha, padrao1, padrao2, M);
    }

    int contagemA = 0, contagemB = 0;
    for (size_t i = 0; i < linha.length(); ++i) {
        if (linha[i] == 'A') {
            ++contagemA;
        } else {
            ++contagemB;
        }
    }

    cout << contagemA << " " << contagemB << endl;
    return 0;
}

