#include <iostream>
using namespace std;

int DigitSum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int l, d, x;
	cin >> l >> d >> x;
	int minVal = 99999, maxVal = 0;
	for (int i = l; i <= d; i++)
	{
		int sum = DigitSum(i);
		if (sum == x)
		{
			minVal = (minVal < i) ? minVal : i;
			maxVal = (maxVal > i) ? maxVal : i;
		}
	}
	cout << minVal << "\n" << maxVal;
	return 0;
}