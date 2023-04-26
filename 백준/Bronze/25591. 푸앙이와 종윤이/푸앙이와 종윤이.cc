#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m, a, b, c, d, q, r;
	cin >> n >> m;
	a = 100 - n; b = 100 - m;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100; r = d % 100;
	cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n";
	if (d >= 100) {
		cout << c + q << " " << r;
	}
	else {
		cout << c << " " << d;
	}
	return 0;
}