#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(1);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, c, cnt = 0;
		cin >> n;
		double g, sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> c >> g;
			cnt += c;
			sum += c*g;
		}
		cout << cnt << " " << sum / cnt << "\n";
	}

	return 0;
}