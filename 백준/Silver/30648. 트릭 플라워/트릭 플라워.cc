#include <iostream>
using namespace std;

bool garden[1000][1000];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int R, t = 0, a, b, na, nb;
	cin >> a >> b >> R;
	garden[a][b] = true;
	while (true)
	{
		t++;
		if (a + 1 + b + 1 < R)
		{
			na = a + 1;
			nb = b + 1;
		}
		else
		{
			na = a / 2;
			nb = b / 2;
		}
		if (garden[na][nb])
			break;
		garden[na][nb] = true;
		a = na;
		b = nb;
	}
	cout << t;
	return 0;
}