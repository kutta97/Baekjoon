#include <iostream>
#include <stack>
#include <string>
using namespace std;

void print(stack<char> &s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}

int main(void) {
	string str;
	stack<char> s;
	bool tag;
	int i;

	getline(cin, str);
	tag = false;
	i = 0;
	while (str[i]) {
		if (str[i] == '<') { 
			print(s);
			tag = true;
		}

		if (tag) {
			cout << str[i];
		} else {
			if (str[i] == ' ') {
				print(s);
				cout << str[i];
			}else {
				s.push(str[i]);
			}
		}

		if (str[i] == '>') {
			tag = false;
		}
		i++;
	}
	print(s);
	cout << '\n';
	return (0);
}