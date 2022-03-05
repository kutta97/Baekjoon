#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int zero = 0;
	for (int i = 5; i <= n; i *= 5) {
		zero += (n / i);
	}

	cout << zero << '\n';
	
	return (0);
}