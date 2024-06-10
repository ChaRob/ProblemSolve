#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int min_v = 9999, max_v = 0, n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		min_v = (min_v < input) ? min_v : input;
		max_v = (max_v > input) ? max_v : input;
	}
	cout << max_v - min_v;
	return 0;
}