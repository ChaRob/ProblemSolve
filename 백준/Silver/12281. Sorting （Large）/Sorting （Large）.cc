#include <iostream>
#include <vector>
#include <algorithm>
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
		vector<int> even;
		vector<int> odd;
		for (int i = 0; i < n; i++)
		{
			cin >> vec[i];
			if (vec[i] % 2) odd.push_back(vec[i]);
			else even.push_back(vec[i]);
		}
		sort(odd.begin(), odd.end());
		sort(even.begin(), even.end(), greater<int>());
		cout << "Case #" << t + 1 << ":";
		int evenIdx = 0, oddIdx = 0;
		for (int i = 0; i < n; i++)
		{
			if (vec[i] % 2 == 0)
				cout << " " << even[evenIdx++];
			else
				cout << " " << odd[oddIdx++];
		}
		cout << "\n";
	}
	return 0;
}