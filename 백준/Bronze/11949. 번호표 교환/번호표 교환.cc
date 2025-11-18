#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> numberTag;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		numberTag.push_back(number);
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (numberTag[j] % i > numberTag[j + 1] % i)
			{
				int tmp = numberTag[j];
				numberTag[j] = numberTag[j + 1];
				numberTag[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << numberTag[i] << "\n";
	}
	return 0;
}