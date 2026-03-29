#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int g;
		cin >> g;
		unordered_set<int> couple;
		for (int j = 0; j < g; j++)
		{
			int c;
			cin >> c;
			if (couple.find(c) != couple.end())
				couple.erase(c);
			else
				couple.insert(c);
		}
		cout << "Case #" << i + 1 << ": " << *couple.begin() << "\n";
	}
	return 0;
}