#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	long long res = 1;
	cin >> n;
	if (n != 0) {
		for (size_t i = 1; i <= n; i++)
		{
			res *= i;
		}
	}
	cout << res;
	return 0;
}