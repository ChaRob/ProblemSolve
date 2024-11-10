#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, d;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int ans = 0;
		cin >> d;
		for (int i = sqrt(d); i >= 0; i--)
		{
			if (i * (i + 1) <= d) {
				ans = i;
				break;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}