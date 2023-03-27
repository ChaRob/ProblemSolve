#include<iostream>
#include<string>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, i, j, cnt = 0;
	string word;
	cin >> n;
	for (int t = 1; t <= n; t++) {
		bool alpha[26] = { false };
		cin >> word;
		for (i = 0; i < word.length();) {
			if (alpha[word[i]-'a']) {
				break;
			}
			j = 0;
			while (i + j < word.length() && word[i + j] == word[i]) {
				j++;
			}
			alpha[word[i]-'a'] = true;
			i += j;
		}
		if (i == word.length()) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}