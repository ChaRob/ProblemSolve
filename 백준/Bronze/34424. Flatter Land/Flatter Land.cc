#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, x;
	cin >> n >> x;
	if (n == 2)
		cout << x;
	else
		cout << (n - 1) * x;
	return 0;
}