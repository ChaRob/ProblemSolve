#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int a, b, res;
		cin >> a >> b;
		res = a / b;
		cout << res * res << "\n";
	}
	return 0;
}