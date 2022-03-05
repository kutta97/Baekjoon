#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool check[1000001] = {};

	int m, n;
	cin >> m >> n;
	
	check[0] = check[1] = true;
	for (int i = 2; i <= n; i++) {
		if (check[i] == false) {
			for (int j = i + i; j <= n; j += i)
				check[j] = true;
		}
	}

	for (int i = m; i <= n; i++) {
		if (check[i] == false) {
			cout << i << '\n';
		}
	}	

	return (0);
}