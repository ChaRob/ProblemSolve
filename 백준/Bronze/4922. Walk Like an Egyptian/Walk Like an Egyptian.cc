#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		cout << n << " => " << (n * n + (n - 1) * (n - 1) + 1) / 2 << "\n";
	}
	return 0;
}