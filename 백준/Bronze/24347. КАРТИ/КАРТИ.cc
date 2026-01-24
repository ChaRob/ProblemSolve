#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string maxValue = "";
	vector<string> c(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> c[i];
	}
	sort(c.begin(), c.end());
	do
	{
		string val = c[0] + c[1] + c[2] + c[3];
		if (maxValue < val)
			maxValue = val;
	} while (next_permutation(c.begin(), c.end()));
	cout << maxValue;
	return 0;
}