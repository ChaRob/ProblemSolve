#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a, b, c, max = 0;
			cin >> a >> b >> c;
			max = (max > a) ? max : a;
			max = (max > b) ? max : b;
			max = (max > c) ? max : c;
			sum += max;
		}
		cout << sum << "\n";
	}
	return 0;
}