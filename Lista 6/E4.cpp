#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int C1, L1, C2, L2;
        cin >> C1 >> L1 >> C2 >> L2;

        bool canFit = (C1 < C2 && L1 < L2) || (C1 < L2 && L1 < C2);
        
        if (canFit) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    
    return 0;
}
