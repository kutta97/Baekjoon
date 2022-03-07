#include <iostream>
using namespace std;

int d[1001] = {0};

int tile2(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = tile2(n - 1) + (tile2(n - 2) * 2);
    d[n] %= 10007;

    return d[n];
}

int main() {
    int N;

    cin >> N;
    cout << tile2(N) << "\n";

    return 0;
}