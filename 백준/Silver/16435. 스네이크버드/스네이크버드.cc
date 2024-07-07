#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, le;
	cin >> n >> le;
	vector<int> fruits;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		fruits.push_back(tmp);
	}
	sort(fruits.begin(), fruits.end());
	for (int i = 0; i < n; i++)
	{
		if (fruits[i] > le) {
			break;
		}
		le++;
	}
	cout << le;
	return 0;
}