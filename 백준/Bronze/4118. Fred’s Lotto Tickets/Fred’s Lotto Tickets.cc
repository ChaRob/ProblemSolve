#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		bool isExist[50] = { false };

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				int num;
				cin >> num;
				isExist[num] = true;
			}
		}
		bool check = true;
		for (int i = 1; i <= 49; i++)
		{
			if (isExist[i] == false)
			{
				check = false;
				break;
			}
		}
		if (check)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}