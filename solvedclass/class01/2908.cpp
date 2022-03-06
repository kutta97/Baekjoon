#include <iostream>
#include <string>
using namespace std;

void swap(string *s) {
    char tmp;

    tmp = (*s)[0];
    (*s)[0] = (*s)[2];
    (*s)[2] = tmp;
}

int sangsoo(string a, string b) {
    string ans;

    for (int i = 2; i >= 0; i--) {
        if (a[i] != b[i]) {
            ans = ((a[i] > b[i]) ? a : b);
            break;
        }
    }
    swap(&ans);

    return stoi(ans);
}

int main() {
    string A, B;

    cin >> A >> B;
    cout << sangsoo(A, B) << "\n";

    return 0;
}