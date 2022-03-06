#include <iostream>
#include <string>
using namespace std;

int main() {
    int T, R;
    string input, output;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R;
        cin >> input;
        output = "";

        int idx = 0;
        while (input[idx]) {
            for (int j = 0; j < R; j++) {
                output.push_back(input[idx]);
            }
            idx++;
        }
        cout << output << "\n";
    }

    return 0;
}