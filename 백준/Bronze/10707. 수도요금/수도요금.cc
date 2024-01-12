#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, d, p, a_p, b_p;
	cin >> a >> b >> c >> d >> p;
	a_p = a * p;
	b_p = (p > c) ? b + (p - c) * d : b;
	cout << ((a_p < b_p) ? a_p : b_p);
	return 0;
}