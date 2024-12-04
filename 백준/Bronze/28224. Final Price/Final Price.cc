#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, price, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> price;
		sum += price;
	}
	cout << sum;
	return 0;
}