#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return (a);
	} else {
		return (gcd(b, a % b));
	}
}

int lcm(int a, int b) {
	int g = gcd(a, b);
	return (g * (a / g) * (b / g));
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << '\n';
	cout << lcm(a, b) << '\n';

	return (0);
}