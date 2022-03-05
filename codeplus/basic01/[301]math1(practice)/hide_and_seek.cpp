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

	int n, s, x;
	int a[100000];
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[i] = (x - s > 0) ? (x - s) : (s - x);
	}
	
	int ans = a[0];
	for (int i = 1; i < n; i++)
		ans = gcd(ans, a[i]);

	cout << ans << '\n';

	return (0);
}