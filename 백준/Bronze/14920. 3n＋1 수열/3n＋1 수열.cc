#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 1;
	cin >> n;
	while (n != 1)
	{
		if (n & 1) n = 3 * n + 1;
		else n /= 2;
		cnt++;
	}
	cout << cnt;
	return 0;
}