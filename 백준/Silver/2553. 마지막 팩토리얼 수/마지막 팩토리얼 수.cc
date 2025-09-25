#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n;
	cin >> n;
	long long factorial = 1;
	for (long long i = 1; i <= n; i++)
	{
		factorial *= i;
		while (factorial % 10 == 0) factorial /= 10;
		factorial %= 10000000;
	}
	cout << factorial % 10 << "\n";
	return 0;
}