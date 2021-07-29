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

		i = 0;
		while (true) {
			if (str[i] == ' ' || str[i] == 0) {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << str[i];
			} else {
				s.push(str[i]);
			}
			if (str[i] == 0) break ;
			i++;
		}
		cout << "\n";
	}
	return (0);
}