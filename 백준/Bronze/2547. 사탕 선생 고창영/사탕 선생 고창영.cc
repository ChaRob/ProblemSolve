#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> n;
		unsigned long long candy, cnt = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> candy;
			cnt += candy;
			cnt %= n;
		}
		if (cnt % n == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}