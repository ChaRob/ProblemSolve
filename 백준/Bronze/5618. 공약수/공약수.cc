#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int Gcd(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, gcd;
	cin >> n;
	int val[3] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> val[i];
	}
	gcd = Gcd(val[0], val[1]);
	if (n == 3) gcd = Gcd(gcd, val[2]);

	vector<int> divid;
	for (int i = 1; i <= sqrt(gcd); i++)
	{
		if (gcd % i == 0) {
			divid.push_back(i);
			if (i != gcd / i) divid.push_back(gcd / i);
		}
	}
	sort(divid.begin(), divid.end());
	for (int v : divid) {
		cout << v << "\n";
	}
	return 0;
}