#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> arr(n);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int x = 0; x < n; x++)
	{
		for (int y = x + 1; y < n; y++)
		{
			for (int z = y + 1; z < n; z++)
			{
				int times = arr[x] * arr[y];
				if (times == arr[z]) cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}