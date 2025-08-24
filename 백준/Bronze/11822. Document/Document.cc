#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, nowWday = 0, totalWday = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int check[5];
		for (int j = 0; j < 5; j++)
		{
			cin >> check[j];
		}
		while (true)
		{
			if (nowWday < 5 && check[nowWday] == 1)
				break;
			nowWday++;
			if (nowWday == 7) nowWday = 0;
			totalWday++;
		}
		nowWday++;
		totalWday++;
	}
	cout << totalWday;
	return 0;
}