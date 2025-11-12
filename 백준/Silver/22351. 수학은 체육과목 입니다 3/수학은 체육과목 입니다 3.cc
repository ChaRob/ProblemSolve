#include <iostream>
#include <string>
using namespace std;

bool CountBetween(const int size, const int a, const int b, const int i, const int j)
{
	int cnt = 0;
	if (j == 1)
	{
		if (a > b) cnt = -1;
		else if (a == b) cnt = size;
		else cnt = (b - a) - 1;
	}
	else if (j == 2)
	{
		if (i == 1)
		{
			cnt = 9 - a + (b - 10) * 2;
		}
		else cnt = (b - a - 1) * 2;
	}
	else
	{
		if (i == 1) cnt = 9 - a + 180 + (b - 100) * 3;
		else if (i == 2) cnt = (99 - a) * 2 + (b - 100) * 3;
		else cnt = (b - a - 1) * 3;
	}

	if (size == cnt) return true;
	return false;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string S;
	cin >> S;
	int a = 0, b = 0;
	for (int i = 1; i <= 3; i++)
	{
		bool found = false;
		for (int j = i; j <= 3; j++)
		{
			if (S.size() < j) break;
			
			int ta = stoi(S.substr(0, i));
			int tb = stoi(S.substr(S.size() - j, j));
			if (CountBetween(S.size() - i - j, ta, tb, i, j))
			{
				string tmp;
				for (int i = ta; i <= tb; i++)
				{
					tmp += to_string(i);
				}
				if (tmp == S)
				{
					a = ta; b = tb;
					found = true;
					break;
				}
			}
		}
		if (found) break;
	}
	cout << a << " " << b;
	return 0;
}