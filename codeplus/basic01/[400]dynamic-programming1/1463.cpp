#include <iostream>
using namespace std;

int d[1000001] = {0};

int getMinCalc(int n) {
    int tmp;
    if (n == 1) {
        return 0;
    }
    if (d[n] > 0) {
        return d[n];
    }
    d[n] = getMinCalc(n - 1) + 1;
    if (n % 2 == 0) {
        tmp = getMinCalc(n / 2) + 1;
        if (tmp < d[n])
            d[n] = tmp;
    }
    if (n % 3 == 0) {
        tmp = getMinCalc(n / 3) + 1;
        if (tmp < d[n])
            d[n] = tmp;
    }
    return d[n];
}

int main() {
    int N;

    cin >> N;
    cout << getMinCalc(N) << "\n";

    return 0;
}