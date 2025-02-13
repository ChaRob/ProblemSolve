#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> n;
		n = (n + 1) / 2;
		cout << n * n << "\n";
	}
	return 0;
}