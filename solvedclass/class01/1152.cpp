#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool wordFlag = false;
    int num = 0;

    getline(cin, str);

    int i = 0;
    while (str[i] != 0) {
        if (str[i] == ' ') {
            if (wordFlag == true)
                wordFlag = false;
        }
        if (str[i] != ' ') {
            if (wordFlag == false) {
                wordFlag = true;
                num++;
            }
        }
        i++;
    }

    cout << num << "\n";
}