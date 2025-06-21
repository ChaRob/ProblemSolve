#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int prize = 0, sm = 0, cm = 999,lm = 999;
	for (int i = 1; i <= n; i++)
	{
		int s, c, l;
		cin >> s >> c >> l;
		if (s > sm)
		{
			prize = i;
			sm = s;
			cm = c;
			lm = l;
		}
		else if (s == sm)
		{
			if (c < cm)
			{
				prize = i;
				cm = c;
				lm = l;
			}
			else if (c == cm)
			{
				if (l < lm)
				{
					prize = i;
					lm = l;
				}
			}
		}
	}
	cout << prize;
	return 0;
}