#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	stack<char> left;
	stack<char> right;
	string	input;
	char	cmd;
	int		t;
  	int		i;

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	cin >> input;
	i = 0;
	while (input[i])
		left.push(input[i++]);

	cin >> t;
	while (t--) {
		cin >> cmd;
		if (cmd == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B') {
			if (!left.empty())
				left.pop();
		}
		else if (cmd == 'P') {
			cin >> cmd;
			left.push(cmd);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	cout << "\n";

	return (0);
}