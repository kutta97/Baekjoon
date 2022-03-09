#include <algorithm>
#include <iostream>
using namespace std;

int P[1001] = {0};

int getMinPrice(int n) {
    int D[1001];

    fill_n(D, 1001, -1);
    D[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (D[i] == -1) {
                D[i] = D[i - j] + P[j];
            }
            D[i] = min(D[i], D[i - j] + P[j]);
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

    cout << getMinPrice(N) << "\n";

    return 0;
}