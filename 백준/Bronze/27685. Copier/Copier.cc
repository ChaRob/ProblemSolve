#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		unordered_set<int> hasInteger;
		vector<int> origin;
		for (int i = 0; i < n; i++)
		{
			int integer;
			cin >> integer;
			auto it = hasInteger.find(integer);
			if (it != hasInteger.end())
				continue;
			else
			{
				origin.push_back(integer);
				hasInteger.insert(integer);
			}
		}
		for (int i : origin)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}