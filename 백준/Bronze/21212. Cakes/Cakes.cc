#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, minimum = 99999;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			minimum = 0;
			break;
		}
		if (b / a < minimum)
		{
			minimum = b / a;
		}
	}
	cout << minimum;
	return 0;
}