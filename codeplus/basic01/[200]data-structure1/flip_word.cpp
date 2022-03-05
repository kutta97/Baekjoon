#include <iostream>
#include <stack>
#include <string>
using namespace std;

int	main(void) {
	int	t;
	int	i;
	string str;
	stack<char>	s;

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	cin.ignore();

	while (t--) {
		getline(cin, str);
		str += '\n';
		i = 0;
		while (str[i]) {
			if (str[i] == ' ' || str[i] == '\n') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << str[i];
			} else {
				s.push(str[i]);
			}
			i++;
		}
	}
	return (0);
}