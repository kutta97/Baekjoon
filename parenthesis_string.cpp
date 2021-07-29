#include <iostream>
#include <stack>
#include <string>
using namespace std;

int	valid(string str) {
	int	i;
	stack<char> s;

	i = 0;
	while (str[i]) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			if (s.empty()) return (0);
			s.pop();
		}
		i++;
	}
	if (s.empty()) return (1);
	else return (0);
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
		if (valid(str)) cout << "YES\n";
		else cout << "NO\n";
	}

	return (0);
}