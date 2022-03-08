#include <iostream>
using namespace std;

long long D[100001][4];

void makePlus5() {
    D[1][1] = 1;
    D[2][2] = 1;
    D[3][3] = 1;
    for (int i = 1; i <= 100000; i++) {
        if (i - 1 > 0) {
            D[i][1] = D[i - 1][2] + D[i - 1][3];
            D[i][1] %= 1000000009;
        }
        if (i - 2 > 0) {
            D[i][2] = D[i - 2][1] + D[i - 2][3];
            D[i][2] %= 1000000009;
        }
        if (i - 3 > 0) {
            D[i][3] = D[i - 3][1] + D[i - 3][2];
            D[i][3] %= 1000000009;
        }
    }
}

int main() {
    int T, n;

    makePlus5();

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        cout << (D[n][1] + D[n][2] + D[n][3]) % 1000000009 << "\n";
    }

    return 0;
}