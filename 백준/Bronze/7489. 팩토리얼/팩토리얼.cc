#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		int factorial = 1;
		for (int i = 1; i <= n; i++)
		{
			factorial *= i;
			while (factorial % 10 == 0) factorial /= 10;
			factorial %= 10000;
		}
		cout << factorial % 10 << "\n";
	}
	return 0;
}