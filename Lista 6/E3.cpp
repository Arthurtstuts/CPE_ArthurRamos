#include <iostream>
#include <string>

using namespace std;

string decifrar(const string& l1, const string& l2) {
    string nome, sobrenome;
    int len1 = l1.length();
    int len2 = l2.length();
    int i = 0, j = 0;
    
    while (i < len1 || j < len2) {
        if (i < len1) {
            nome += l1.substr(i, 2);
            i += 2;
        }
        if (j < len2) {
            sobrenome += l2.substr(j, 2);
            j += 2;
        }
    }
    
    string nometodo;
    i = 0, j = 0;
    while (i < nome.length() || j < sobrenome.length()) {
        if (i < nome.length()) {
            nometodo += nome[i++];
        }
        if (i < nome.length()) {
            nometodo += nome[i++];
        }
        if (j < sobrenome.length()) {
            nometodo += sobrenome[j++];
        }
        if (j < sobrenome.length()) {
            nometodo += sobrenome[j++];
        }
    }
    
    return nometodo;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    for (int i = 0; i < N; ++i) {
        string l1, l2;
        getline(cin, l1);
        getline(cin, l2);
        
        cout << decifrar(l1, l2) << endl;
    }
    
    return 0;
}

