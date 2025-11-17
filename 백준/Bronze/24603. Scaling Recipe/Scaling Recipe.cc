#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, x, y;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		cout << y * a / x << "\n";
	}
	return 0;
}