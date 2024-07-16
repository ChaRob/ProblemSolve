#include <iostream>
using namespace std;

int ClapCnt(int n) {
	int cnt = 0, tmp;
	while (n > 0)
	{
		tmp = n % 10;
		if (tmp != 0 && tmp % 3 == 0) cnt++;
		n /= 10;
	}
	return cnt;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cnt += ClapCnt(i);
	}
	cout << cnt;
	return 0;
}