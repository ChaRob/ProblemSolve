#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int rat[4], small = 999, smIdx = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> rat[i];
		if (small > rat[i])
		{
			small = rat[i];
			smIdx = i;
		}
	}
	int least = 0;
	for (int i = 0; i < 4; i++)
	{
		if (smIdx != i) least += rat[i];
	}
	cout << least + 1;
	return 0;
}