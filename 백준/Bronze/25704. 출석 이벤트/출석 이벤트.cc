#include<iostream>
using namespace std;

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, p, res[4] = { 50000,50000,50000,50000 };
	cin >> n >> p;
	if (n >= 20) {
		res[0] = p / 4 * 3;
	}
	if (n >= 15) {
		res[1] = p - 2000;
	}
	if (n >= 10) {
		res[2] = p / 10 * 9;
	}
	if (n >= 5) {
		res[3] = p - 500;
	}
	res[0] = min(min(min(res[0], res[1]), min(res[2], res[3])), p);
	cout << ((res[0] > 0) ? res[0] : 0);
	return 0;
}