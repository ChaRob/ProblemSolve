#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, d, k;
	cin >> a >> d >> k;
	if ((k - a) % d != 0 || (k - a) / d < 0)
	{
		cout << "X";
	}
	else
	{
		cout << ((k - a) / d) + 1;
	}
	return 0;
}