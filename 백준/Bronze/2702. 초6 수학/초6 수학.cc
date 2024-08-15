#include<iostream>
using namespace std;

int GCD(int a, int b) {
	while (b > 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int LCM(int a, int b) {
	int gcd = GCD(a, b);
	return a * b / gcd;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int a, b, gcd, lcm;
		cin >> a >> b;
		if (a < b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		gcd = GCD(a, b);
		lcm = LCM(a, b);
		cout << lcm << " " << gcd << "\n";
	}
	return 0;
}