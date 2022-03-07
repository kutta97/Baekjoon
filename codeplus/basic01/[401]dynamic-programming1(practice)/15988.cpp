#include <iostream>
using namespace std;

long long d[1000001] = {0};

void makePlus() {
    d[0] = 1;
    d[1] = 1;
    d[2] = 2;

    for (int n = 3; n <= 1000000; n++) {
        d[n] = d[n - 1] + d[n - 2] + d[n - 3];
        d[n] %= 1000000009;
    }
}

int main() {
    int T, N;

    makePlus();

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << d[N] << "\n";
    }

    return 0;
}