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
	bool tag = false;

	getline(cin, str);
	for (char ch : str) {
		if (ch == '<') { 
			print(s);
			tag = true;
		}
		
		if (tag) {
			cout << ch;
		} else {
			if (ch == ' ') {
				print(s);
				cout << ch;
			} else {
				s.push(ch);
			}
		}

		if (ch == '>') {
			tag = false;
		}
	}
	print(s);
	cout << '\n';
	return (0);
}