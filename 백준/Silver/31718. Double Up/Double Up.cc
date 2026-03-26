#include <iostream>
#include <map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	map<int, int> count;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		while (val % 2 == 0) val /= 2;
		auto it = count.find(val);
		if (it != count.end())
			it->second++;
		else
			count[val] = 1;
	}
	int appear = 0;
	for (auto [key, cnt] : count)
	{
		if (cnt > appear)
			appear = cnt;
	}
	cout << appear;
	return 0;
}