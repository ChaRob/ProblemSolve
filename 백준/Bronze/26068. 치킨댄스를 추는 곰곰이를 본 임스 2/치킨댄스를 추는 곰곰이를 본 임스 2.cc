#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, x, cnt = 0;
	string str, D;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		D.clear();
		for (int j = 0; j < str.length(); j++) {
			if (isdigit(str[j])) {
				D.push_back(str[j]);
			}
		}
		x = stoi(D);
		if (x <= 90) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}