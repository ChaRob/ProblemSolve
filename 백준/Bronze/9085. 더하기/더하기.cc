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
			int tmp;
			cin >> tmp;
			if (tmp <= 10) sum += tmp;
		}
		cout << sum << "\n";
	}
	return 0;
}