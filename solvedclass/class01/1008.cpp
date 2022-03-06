#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout.precision(10);
    cout << (double)a / b << "\n";

    return 0;
}