#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int sab, ma, fab, mb;
	cin >> sab >> ma >> fab >> mb;
	if (sab <= ma + fab + mb || sab <= 240)
	{
		cout << "high speed rail";
	}
	else
	{
		cout << "flight";
	}
	return 0;
}