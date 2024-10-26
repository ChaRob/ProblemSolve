#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, k, candies, cnt = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> candies;
			cnt += candies / k;
		}
		cout << cnt << "\n";
	}
	return 0;
}