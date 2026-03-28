#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int count[10] = {};
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		count[val]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (count[i] > 0)
			cout << i << "\n";
	}
	return 0;
}