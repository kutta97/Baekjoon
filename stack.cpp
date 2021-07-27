#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
	int	data[10000];

public:
	int	size;
	Stack() { size = 0; }
	void push(int num) {
		data[size] = num;
		size++;
	}
	bool empty() {
		if (size == 0) return (1);
		else return (0);
	}
	int pop() {
		if (empty()) return (-1);
		else return (data[--size]);
	}
	int top() {
		if (empty()) return (-1);
		else return (data[size - 1]);
	}
};

int	main(void) {
	int	cnt;
	int num;
	string cmd;
	Stack s;

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> cnt;
	while (cnt--)
	{
		cin >> cmd;
		if (cmd == "push") {
			cin >> num;
			s.push(num);
		} else if (cmd == "pop") {
			cout << s.pop() << "\n";
		} else if (cmd == "size") {
			cout << s.size << "\n";
		} else if (cmd == "empty") {
			cout << (s.empty() ? 1 : 0) << "\n";
		} else if (cmd == "top") {
			cout << s.top() << "\n";
		}
	}

	return (0);
}