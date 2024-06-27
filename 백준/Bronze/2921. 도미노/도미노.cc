#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	long long cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		cnt += i * (i + 1) * 3 / 2;
	}
	cout << cnt;
	return 0;
}