#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int T = 0; T < t; T++)
	{
		float res = 0;
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		res = a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
		cout << setprecision(2) << fixed << '$' << res << "\n";
	}
	return 0;
}