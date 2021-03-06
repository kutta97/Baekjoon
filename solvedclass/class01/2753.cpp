#include <iostream>
using namespace std;

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 400 == 0) {
            return 1;
        }
        if (year % 100 == 0) {
            return 0;
        }
        return 1;
    }
    return 0;
}

int main() {
    int year;

    cin >> year;
    cout << isLeapYear(year) << "\n";

    return 0;
}