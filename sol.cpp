#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] != '4' && s[i] != '7') {
				// simply count the digits that are not equal to 4 or 7
				// since the operation is the most efficient to use is the
				// 2nd operation (check problem statement)
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
