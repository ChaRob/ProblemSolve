#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n, c;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int day = 0;
		cin >> n >> c;
		day = n / c;
		if (n % c > 0) day++;
		cout << day << "\n";
	}
	return 0;
}