#include <iostream>
using namespace std;

int main(void) {
	int	t;
	int	a;
	int	b;
	int	*ary;
	int	i;

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	ary = new int[t];
	i = 0;
	while (i < t)
	{
		cin >> a >> b;
		ary[i] = a + b;
		i++;
	}
	i = 0;
	while (i < t)
	{
		cout << ary[i] << "\n";
		i++;
	}
	
	return (0);
}