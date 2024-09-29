#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, tmp;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << "\n";
	}
	return 0;
}