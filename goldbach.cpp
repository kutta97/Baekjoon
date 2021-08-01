#include <iostream>
using namespace std;
const int MAX = 1000000;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool check[MAX + 1] = {};
	int prime[MAX];
	int pn = 0;

	check[0] = check[1] = true;
	for (int i = 2; i < MAX; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j < MAX; j += i)
				check[j] = true;
		}
	}

	int n;
	while (true) {
		cin >> n;
		if (n == 0) break ;
		for (int i = 0; i < pn; i++) {
			if (check[n - prime[i]] == false) {
				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
				break ;
			}
		}
	}

	return (0);
}