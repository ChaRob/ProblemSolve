#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, m;
		int input;
		cin >> n;
		unordered_map<int, bool> hashmap;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			hashmap[input] = true;
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> input;
			if (hashmap.find(input) != hashmap.end()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
	}
	return 0;
}