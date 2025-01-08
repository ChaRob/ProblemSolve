#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, p, t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p >> t;
		p += t / 4 - t / 7;
		cout << p << "\n";
	}
	return 0;
}