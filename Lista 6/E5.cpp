#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool sortudo(int num) {
    string numStr = to_string(num);
    for (char ch : numStr) {
        if (ch != '4' && ch != '7') { // usa a string para verificar se ambos os caracteres fazem parte do número
            return false;
        }
    }
    return true;
}

bool quasesortudo(int num) {
    vector<int> numsortudo = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477, 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477, 74744, 74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744, 77747, 77774, 77777, 444444, 444447, 444474};
    for (int sorte : numsortudo) {
        if (num % sorte == 0) {
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

