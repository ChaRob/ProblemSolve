#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	unordered_set<int> set = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			auto idx = set.find(i * j);
			if (idx == set.end())
			{
				set.insert(i * j);
			}
		}
	}
	int n;
	cin >> n;
	auto idx = set.find(n);
	if (idx != set.end()) cout << "1";
	else cout << "0";
	return 0;
}