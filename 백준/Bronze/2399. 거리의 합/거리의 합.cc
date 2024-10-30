#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, sum = 0;;
	cin >> n;
	long long* num = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum += abs(num[i] - num[j]);
		}
	}
	cout << sum * 2;
	delete[] num;
	return 0;
}