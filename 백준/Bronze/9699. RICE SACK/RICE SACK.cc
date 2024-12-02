#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int max = 0;
		for (int j = 0; j < 5; j++)
		{
			cin >> v;
			max = (max > v) ? max : v;
		}
		cout << "Case #" << i + 1 << ": " << max << "\n";
	}
	return 0;
}