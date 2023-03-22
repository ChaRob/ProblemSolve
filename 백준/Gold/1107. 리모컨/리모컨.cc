#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, button[11] = { false }, i, j, inputbutton;
	cin >> n >> m;
	for (i = 1; i <= m; i++) {
		cin >> j;
		button[j] = true;
	}
	inputbutton = abs(100 - n);
	for (i = 0; i <= 1000000; i++) {
		string s = to_string(i);
		for (j = 0; j < s.length(); j++) {
			if (button[s[j] - '0']) {
				break;
			}
			else if (j == s.length() - 1) {
				inputbutton = (inputbutton < j + 1 + abs(n - i)) ? inputbutton : j + 1 + abs(n - i);
			}
		}
	}
	cout << inputbutton;
	return 0;
}