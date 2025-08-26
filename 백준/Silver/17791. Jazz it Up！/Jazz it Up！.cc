#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n;
	for (m = 2; m < n; m++)
	{
		bool check = true;
		for (int k = 2; k*k < m * n; k++)
		{
			if ((m * n) % (k*k) == 0)
			{
				check = false;
				break;
			}
		}
		if (check)
			break;
	}
	cout << m;
	return 0;
}