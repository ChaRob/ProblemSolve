#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int p, m;
		cin >> p >> m;
		bool* arr = new bool[m + 1];
		for (int j = 0; j <= m; j++)
			arr[j] = false;
		int count = 0;
		for (int j = 0; j < p; j++)
		{
			int num;
			cin >> num;
			if (arr[num - 1] == false) arr[num - 1] = true;
			else count++;
		}
		cout << count << "\n";
	}
	return 0;
}