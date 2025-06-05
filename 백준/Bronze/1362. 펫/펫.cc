#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t = 1;
	while (true)
	{
		double o, w;
		bool isLive = true;
		cin >> o >> w;
		if (o == 0 && w == 0)
		{
			break;
		}
		while (true)
		{
			char c; int n;
			cin >> c >> n;
			if (c == '#')
			{
				string s;
				if (w <= 0 || !isLive) s = "RIP";
				else if (w < o * 2 && w > (double)(o / 2))
				{
					s = ":-)";
				}
				else
				{
					s = ":-(";
				}
				cout << t++ << " " << s << "\n";
				break;
			}
			else if (c == 'F')
			{
				w += n;
			}
			else if (c == 'E')
			{
				w -= n;
				if (w <= 0)
				{
					isLive = false;
				}
			}
		}
	}
	return 0;
}