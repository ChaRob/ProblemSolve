#include<iostream>
#include<string>
using namespace std;

int cnt[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cnt[0] = 1;
	for (int i = 1; i <= 1000000; i++)
	{
		string s = to_string(i);
		cnt[i] = cnt[i - 1];
		for (char& c : s)
		{
			if (c == '0') cnt[i]++;
		}
	}
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, m, ans;
		cin >> n >> m;
		if (n == 0) ans = cnt[m];
		else ans = cnt[m] - cnt[n - 1];
		cout << ans << "\n";
	}
	return 0;
}