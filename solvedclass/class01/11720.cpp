#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    char tmp;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        sum += (tmp - '0');
    }

    cout << sum << "\n";

    return 0;
}