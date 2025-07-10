#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, papers = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x % 2 > 0)
			papers += x / 2 + 1;
		else
			papers += x / 2;
	}
	cout << papers;
	return 0;
}