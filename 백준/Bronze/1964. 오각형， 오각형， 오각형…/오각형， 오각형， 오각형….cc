#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	ll n, cnt;
	cin >> n;
	cnt = 1;
	for (int i = 1; i <= n; i++)
	{
		cnt = (cnt + 3 * i + 1) % 45678;
	}
	cout << cnt;
	return 0;
}