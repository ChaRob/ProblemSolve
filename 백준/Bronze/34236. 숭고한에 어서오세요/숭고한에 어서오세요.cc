#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int lastYear, prevYear = 0, diff;
	cin >> lastYear;
	for (int i = 1; i < n; i++)
	{
		prevYear = lastYear;
		cin >> lastYear;
		diff = lastYear - prevYear;
	}
	cout << lastYear + diff;
	return 0;
}