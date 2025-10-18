#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, upline = 0, i = 1;
	cin >> n;
	while (n > upline) upline += i++;
	int a = 1, b = i - 1;
	while (n != upline)
	{
		upline--;
		a++;
		b--;
	}
	cout << a << " " << b;
	return 0;
}