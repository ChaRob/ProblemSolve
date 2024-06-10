#include <iostream>
using namespace std;

int Gcd(int a, int b) {
	int tmp;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b>0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int pos[100000];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, min_gcd;
	cin >> n >> pos[0] >> pos[1] >> pos[2];
	min_gcd = Gcd(pos[2] - pos[1], pos[1] - pos[0]);
	for (int i = 3; i < n; i++)
	{
		cin >> pos[i];
		min_gcd = Gcd(min_gcd, pos[i] - pos[i - 1]);
	}
	int cnt = 0;
	for (int i = 1; i < n; i++)
	{
		cnt += (pos[i] - pos[i - 1]) / min_gcd - 1;
	}
	cout << cnt;
	return 0;
}