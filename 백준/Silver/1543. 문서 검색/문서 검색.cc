#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string origin, pattern;
	getline(cin, origin);
	getline(cin, pattern);
	int cnt = 0, idx = 0;
	bool check = true;
	while (idx + pattern.length() <= origin.length()) {
		check = true;
		for (int i = 0; i < pattern.length(); i++)
		{
			if (pattern[i] != origin[idx + i]) {
				idx++;
				check = false;
				break;
			}
		}
		if (check) {
			cnt++;
			idx += pattern.length();
		}
	}

	cout << cnt;
	return 0;
}