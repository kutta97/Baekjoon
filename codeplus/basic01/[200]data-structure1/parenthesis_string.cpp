#include <iostream>
#include <string>
using namespace std;

string	valid(string s) {
	int	i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s[i]) {
		if (s[i] == '(') cnt++;
		else {
			if (cnt == 0) return ("NO");
			cnt--;
		}
		i++;
	}
	if (cnt == 0) return ("YES");
	else return ("NO");
}

int	main(void) {
	int	t;
	string str;

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while (t--) {
		cin >> str;
		cout << valid(str) << '\n';
	}

	return (0);
}