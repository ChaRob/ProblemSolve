#include<iostream>
#include<queue>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	short snake_ladder[101];
	short rollcnt[101];
	for (size_t i = 0; i < 101; i++)
	{
		snake_ladder[i] = i;
		rollcnt[i] = 1000;
	}
	short x, y;
	for (size_t i = 0; i < n + m; i++)
	{
		cin >> x >> y;
		snake_ladder[x] = y;
	}
	queue<short> dot;
	dot.push(1);
	rollcnt[1] = 0;
	while (!dot.empty())
	{
		short dot_num = dot.front();
		dot.pop();
		for (size_t dice = 1; dice <= 6; dice++)
		{
			int next_dot = dot_num + dice;
			if (next_dot <= 100 && rollcnt[next_dot] > rollcnt[dot_num] + 1) {
				rollcnt[next_dot] = rollcnt[dot_num] + 1;
				if (snake_ladder[next_dot] != next_dot && rollcnt[snake_ladder[next_dot]] > rollcnt[next_dot]) {
					rollcnt[snake_ladder[next_dot]] = rollcnt[next_dot];
				}
				dot.push(snake_ladder[next_dot]);
			}
		}
	}
	cout << rollcnt[100];
	return 0;
}