#include <iostream>
using namespace std;

char getGrade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    }
    if (score >= 80 && score < 90) {
        return 'B';
    }
    if (score >= 70 && score < 80) {
        return 'C';
    }
    if (score >= 60 && score < 70) {
        return 'D';
    }

    return 'F';
}

int main() {
    int score;

    cin >> score;
    cout << getGrade(score) << "\n";

    return 0;
}