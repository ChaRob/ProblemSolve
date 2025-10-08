#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int sab, fab;
	cin >> sab >> fab;
	if (sab <= fab)
	{
		cout << "high speed rail";
	}
	else
	{
		cout << "flight";
	}
	return 0;
}