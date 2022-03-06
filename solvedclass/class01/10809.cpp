#include <iostream>
#include <string>
using namespace std;

int main() {
    int alpha[26];
    string str;

    cin >> str;
    fill_n(alpha, 26, -1);

    int i = 0;
    while (str[i]) {
        int idx = str[i] - 'a';
        if (alpha[idx] == -1) {
            alpha[idx] = i;
        }
        i++;
    }

    for (int i = 0; i < 26; i++) {
        cout << alpha[i] << " ";
    }

    return 0;
}