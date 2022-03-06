#include <iostream>
using namespace std;

int main() {
    int H, M;
    cin >> H >> M;

    if (M >= 45) {
        cout << H << " " << M - 45 << "\n";
    } else {
        cout << ((H == 0) ? 23 : (H - 1)) << " " << 60 - (45 - M) << "\n";
    }

    return 0;
}