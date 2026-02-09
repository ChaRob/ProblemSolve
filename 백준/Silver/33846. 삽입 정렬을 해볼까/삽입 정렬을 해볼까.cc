#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, t;
	cin >> n >> t;
	vector<int> res(t);
	for (int i = 0; i < t; i++)
		cin >> res[i];
	sort(res.begin(), res.end());
	for (int i = 0; i < t; i++)
	{
		cout << res[i] << " ";
	}
	for (int i = t; i < n; i++)
	{
		int val;
		cin >> val;
		cout << val << " ";
	}
	return 0;
}