#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return (a);
	else return (gcd(b, a % b));
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a[100];
	int t, n;
	long long sum;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sum = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++)
				sum += gcd(a[i], a[j]);
		}
		cout << sum << '\n';
	}
	return (0);
}