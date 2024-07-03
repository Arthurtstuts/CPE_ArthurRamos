#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

bool sortudo(int num) {
    stringstream ss;
    ss << num;
    string numStr = ss.str();
    for (int i = 0; i < numStr.length(); ++i) {
        if (numStr[i] != '4' && numStr[i] != '7') {
            return false;
        }
    }
    return true;
}

bool quasesortudo(int num) {
    int sortudos[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, };
    for (int i = 0; i < sizeof(sortudos) / sizeof(sortudos[0]); ++i) {
        if (num % sortudos[i] == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    while (cin >> num) {
        if (sortudo(num)) {
            cout << "Sortudo" << endl;
        } else if (quasesortudo(num)) {
            cout << "Quase sortudo" << endl;
        } else {
            cout << "Azarado" << endl;
        }
    }
    return 0;
}

