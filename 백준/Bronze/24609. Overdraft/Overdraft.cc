#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, now = 0, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tran;
		cin >> tran;
		now += tran;
		if (now  < 0)
		{
			ans += abs(now);
			now = 0;
		}
	}
	cout << ans;
	return 0;
}