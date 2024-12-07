#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, g, res, ans;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> g;
		res = g * 100 / n;
		if (res <= 4) ans = 1;
		else if (res <= 11) ans = 2;
		else if (res <= 23) ans = 3;
		else if (res <= 40) ans = 4;
		else if (res <= 60) ans = 5;
		else if (res <= 77) ans = 6;
		else if (res <= 89) ans = 7;
		else if (res <= 96) ans = 8;
		else ans = 9;
		cout << ans << " ";
	}
	return 0;
}