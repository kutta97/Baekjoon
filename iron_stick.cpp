#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	int i = 0;
	int ans = 0;
	string stick;
	stack<int> s;

	cin >> stick;
	while (stick[i]) {
		if (stick[i] == '(') {
			s.push(i + 1);
		} else if (stick[i] == ')') {
			if (i - s.top() == 0) {
				s.pop();
				ans += s.size();
			} else {
				s.pop();
				ans++;
			}
		}
		i++;
	}

	cout << ans << '\n';
	return (0);
}