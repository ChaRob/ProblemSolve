#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, r = 1, c = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (r > c) c++;
		else r++;
	}
	cout << r * c;
	return 0;
}