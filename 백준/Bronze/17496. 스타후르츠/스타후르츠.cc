#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, t, c, p, now = 1, sum = 0;
	cin >> n >> t >> c >> p;
	while (true)
	{
		if (now + t > n) break;
		now += t;
		sum += c * p;
	}
	cout << sum;
	return 0;
}