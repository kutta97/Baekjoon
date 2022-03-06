#include <iostream>
#include <string>
using namespace std;

string toUpperCase(string str) {
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }

    return str;
}

int main() {
    int alphabets[26] = {
        0,
    };
    string str;

    getline(cin, str);
    str = toUpperCase(str);

    int i = 0;
    while (str[i]) {
        int index = str[i] - 'A';
        alphabets[index]++;
        i++;
    }

    int most = 0;
    char ans = '?';
    for (int i = 0; i < 26; i++) {
        if (alphabets[i] == 0) {
            continue;
        }
        if (most == alphabets[i]) {
            ans = '?';
        }
        if (most < alphabets[i]) {
            most = alphabets[i];
            ans = i + 'A';
        }
    }

    cout << ans << "\n";

    return 0;
}