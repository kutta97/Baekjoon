#include <iostream>
using namespace std;

int d[1001] = {0};

int tile(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = tile(n - 1) + tile(n - 2);
    d[n] %= 10007;

    return d[n];
}

int main() {
    int N;

    cin >> N;
    cout << tile(N) << "\n";

    return 0;
}