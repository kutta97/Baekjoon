#include <iostream>
using namespace std;

void check(int *n) {
    if (n[0] == 1) {
        for (int i = 1; i < 8; i++) {
            if (n[i] != i + 1) {
                cout << "mixed\n";
                return;
            }
        }
        cout << "ascending\n";
        return;
    }

    if (n[0] == 8) {
        for (int i = 1; i < 8; i++) {
            if (n[i] != 8 - i) {
                cout << "mixed\n";
                return;
            }
        }
        cout << "descending\n";
        return;
    }

    cout << "mixed\n";
}

int main() {
    int n[8];

    for (int i = 0; i < 8; i++) {
        cin >> n[i];
    }
    check(n);

    return 0;
}