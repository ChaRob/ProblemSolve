#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != t[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}