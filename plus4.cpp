#include <iostream>
using namespace std;

int main(void) {
	int	a;
	int	b;

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (cin >> a >> b)
		cout << a + b << "\n";
	
	return (0);
}