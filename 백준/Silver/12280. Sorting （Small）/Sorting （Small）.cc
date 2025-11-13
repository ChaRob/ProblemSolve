#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
		{
			cin >> vec[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (vec[i] % 2 == 0 && vec[j] % 2 == 0)
				{
					if (vec[i] < vec[j])
					{
						int tmp = vec[i];
						vec[i] = vec[j];
						vec[j] = tmp;
					}
				}
				else if (vec[i] % 2 && vec[j] % 2)
				{
					if (vec[i] > vec[j])
					{
						int tmp = vec[i];
						vec[i] = vec[j];
						vec[j] = tmp;
					}
				}
			}
		}
		cout << "Case #" << t + 1 << ":";
		for (int i = 0; i < n; i++)
		{
			cout << " " << vec[i];
		}
		cout << "\n";
	}
	return 0;
}