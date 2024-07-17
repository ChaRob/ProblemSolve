#include <iostream>
#include <string>
using namespace std;

int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int goal[2];
int n, m;
int min_cnt = 99;

void bfs(int rx, int ry, int bx, int by, int cnt, string newMap[10]) {
	if (cnt > 10) return;

	for (int i = 0; i < 4; i++)
	{
		int nrx = rx, nry = ry;
		int nbx = bx, nby = by;
		int idx = 1;
		bool rPut = false, bPut = false;
		string map[10];
		for (int i = 0; i < 10; i++)
		{
			map[i] = newMap[i];
		}
		while (true)
		{
			bool rMove = false, bMove = false;
			if (!rPut && map[nrx + dir[i][0]][nry + dir[i][1]] == 'O') {
				map[nrx][nry] = '.';
				rPut = true;
			}
			if (map[nrx + dir[i][0]][nry + dir[i][1]] == '.')
			{
				map[nrx][nry] = '.';
				nrx += dir[i][0], nry += dir[i][1];
				map[nrx][nry] = 'R';
				rMove = true;
			}

			if (!bPut && map[nbx + dir[i][0]][nby + dir[i][1]] == 'O') {
				map[nbx][nby] = '.';
				bPut = true;
			}
			if (map[nbx + dir[i][0]][nby + dir[i][1]] == '.')
			{
				map[nbx][nby] = '.';
				nbx += dir[i][0], nby += dir[i][1];
				map[nbx][nby] = 'B';
				bMove = true;
			}

			if (!rMove && !bMove) break;
		}
		if (bPut) continue;
		if (rPut) {
			if (cnt <= 9)
				min_cnt = (min_cnt < cnt + 1) ? min_cnt : cnt + 1;
			return;
		}

		if ((nrx != rx || nry != ry) || (nbx != bx || nby != by)) {
			bfs(nrx, nry, nbx, nby, cnt + 1, map);
		}
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	int rx, ry, bx, by;
	string map[10];
	for (int i = 0; i < n; i++)
	{
		cin >> map[i];
		if (map[i].find('O') != string::npos) {
			goal[0] = i;
			goal[1] = map[i].find('O');
		}
		if (map[i].find('R') != string::npos) {
			rx = i; ry = map[i].find('R');
		}
		if (map[i].find('B') != string::npos) {
			bx = i; by = map[i].find('B');
		}
	}
	bfs(rx, ry, bx, by, 0, map);
	if (min_cnt == 99) {
		min_cnt = -1;
	}
	cout << min_cnt;
	return 0;
}