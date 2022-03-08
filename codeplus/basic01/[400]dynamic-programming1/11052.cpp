#include <algorithm>
#include <iostream>
using namespace std;

int P[1001] = {0};

int getMaxPrice(int n) {
    int D[1001] = {0};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            D[i] = max(D[i], D[i - j] + P[j]);
        }
    }

    return D[n];
}

int main() {
    int N;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        int tmp;
        cin >> tmp;
        P[i] = tmp;
    }

    cout << getMaxPrice(N) << "\n";

    return 0;
}