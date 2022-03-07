#include <iostream>
using namespace std;

int d[12] = {0};

int makePlus(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = makePlus(n - 1) + makePlus(n - 2) + makePlus(n - 3);

    return d[n];
}

int main() {
    int T, N;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << makePlus(N) << "\n";
    }

    return 0;
}