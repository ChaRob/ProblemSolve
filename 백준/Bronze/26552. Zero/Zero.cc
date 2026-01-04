#include <iostream>
using namespace std;

bool HasZero(int n)
{
	int r = 0;
	while (n / 10)
	{
		r = n % 10;
		if (r == 0) return true;
		n /= 10;
	}
	return false;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		k++;
		while (HasZero(k))
			k++;
		cout << k << "\n";
	}
	return 0;
}