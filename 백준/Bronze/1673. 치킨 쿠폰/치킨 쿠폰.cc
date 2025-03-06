#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, k, cnt = 0, tmp;
	while (cin >> n >> k)
	{
		cnt = n;
		tmp = n;
		while (tmp >= k)
		{
			cnt += tmp / k;
			tmp = tmp / k + tmp % k;
		}
		cout << cnt << "\n";
	}
	return 0;
}