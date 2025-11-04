#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, fibo = 1, fibo2 = 0;
	cin >> n;
	int idx = 0;
	while (n > 0)
	{
		n -= fibo;
		long long tmp = fibo + fibo2;
		fibo2 = fibo;
		fibo = tmp;
		idx++;
	}
	cout << idx;
	return 0;
}