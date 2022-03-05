#include <iostream>
using namespace std;

bool prime(int n) {
	if (n < 2) return (false);
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return (false); 
	}
	return (true);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, num;
	int ans = 0;

	cin >> n;
	while (n--) {
		cin >> num;
		if (prime(num)) ans++;
	}

	cout << ans << '\n';
	return (0);
}