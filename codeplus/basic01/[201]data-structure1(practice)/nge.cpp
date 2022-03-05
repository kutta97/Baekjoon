#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;

	stack<int> s;
	vector<int> seq(n);
	vector<int> ans(n);

	for (int i = 0; i < n; i++)
		cin >> seq[i];

	for (int i = 0; i < n; i++) {
		while (!s.empty() && seq[s.top()] < seq[i]) {
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