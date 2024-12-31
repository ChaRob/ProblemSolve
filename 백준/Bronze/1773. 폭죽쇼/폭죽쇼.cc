#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, c, cnt = 0;
	cin >> n >> c;
	int* firework = new int[n], *nextTime = new int[n] {};
	bool check = false;
	for (int i = 0; i < n; i++)
	{
		cin >> firework[i];
		nextTime[i] = firework[i];
	}
	for (int i = 0; i <= c; i++)
	{
		check = false;
		for (int j = 0; j < n; j++)
		{
			if (i == nextTime[j]) {
				check = true;
				nextTime[j] += firework[j];
			}
		}
		if (check) cnt++;
	}
	cout << cnt;
	return 0;
}