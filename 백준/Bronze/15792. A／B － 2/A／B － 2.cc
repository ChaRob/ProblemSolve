#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a >= b)
	{
		cout << a / b << '.';
		a %= b;
	}
	else
		cout << "0.";
	int r = 0;
	while (r <= 1000 && a != 0)
	{
		a *= 10;
		cout << a / b;
		a %= b;
		r++;
	}
	return 0;
}