#include <iostream>
using namespace std;

long long ConvertSum(long long n)
{
	long long sum = 0;
	for (size_t i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	long long result = 1;
	for (size_t i = a; i <= b; i++)
	{
		result = (result * ConvertSum(i)) % 14579;
	}
	cout << result % 14579 << endl;
	return 0;
}