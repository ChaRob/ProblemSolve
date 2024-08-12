#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		vector<int> vec;
		for (int i = 0; i < 5; i++)
		{
			int tmp;
			cin >> tmp;
			vec.push_back(tmp);
		}
		sort(vec.begin(), vec.end());
		if (vec[3] - vec[1] >= 4) cout << "KIN\n";
		else cout << vec[1] + vec[2] + vec[3] << "\n";
	}
	return 0;
}