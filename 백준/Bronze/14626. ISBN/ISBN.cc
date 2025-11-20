#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int checkSum = 0;
	bool isEven = false;
	for (int i = 0; i < 13; i++)
	{
		char c;
		cin >> c;
		if (c == '*')
		{
			c = '0';
			isEven = (i % 2 == 1);
		}
		if (i % 2 == 0)
			checkSum += (c - '0');
		else
			checkSum += (c - '0') * 3;
	}
	int checkMod;
	if (checkSum % 10 == 0)
		checkMod = 0;
	else
		checkMod = 10 - checkSum % 10;
	int ans = checkMod;
	if (isEven)
	{
		while (ans % 3 != 0) ans += 10;
		ans /= 3;
	}
	cout << ans;
	return 0;
}