#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int freq[1000001] = {};

	int n;
	cin >> n;
	vector<int> seq(n);
	vector<int> ans(n);
	stack<int> s;

	for(int i = 0; i < n; i++) {
		cin >> seq[i];
		freq[seq[i]]++;
	}

	for(int i = 0; i < n; i++) {
		while (!s.empty() && freq[seq[s.top()]] < freq[seq[i]]) {
			ans[s.top()] = seq[i];
			s.pop();
		}
		s.push(i);
	}

	while (!s.empty()) {
		ans[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}
	cout << '\n';

	return (0);
}