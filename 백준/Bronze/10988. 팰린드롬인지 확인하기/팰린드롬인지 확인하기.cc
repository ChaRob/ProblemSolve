#include<iostream>
#include<string>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int res = 1;
	string s;
	cin >> s;
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - 1 - i]) {
			res = 0;
			break;
		}
	}
	cout << res;
	return 0;
}