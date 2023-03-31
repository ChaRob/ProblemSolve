#include<iostream>
using namespace std;

int res;
int roadmap[8][8] = { 0 };
int direct[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };

void route(int n, int cnt, int x, int y, bool visited[8][8], bool used, int k) {
	int nx, ny;
	if (res < cnt) {
		res = cnt;
	}
	for (int idx = 0; idx < 4; idx++)
	{
		nx = x + direct[idx][0];
		ny = y + direct[idx][1];
		if (0 <= nx && nx < n && 0 <= ny && ny < n && !visited[nx][ny]) {
			if (roadmap[nx][ny] < roadmap[x][y]) {
				visited[nx][ny] = true;
				route(n, cnt + 1, nx, ny, visited, used, k);
				visited[nx][ny] = false;
			}
			else if (!used) {
				int tmp = roadmap[nx][ny];
				for (int t = 1; t <= k; t++)
				{
					roadmap[nx][ny] = (roadmap[nx][ny] - t > 0) ? roadmap[nx][ny] - t : 0;
					if (roadmap[nx][ny] < roadmap[x][y]) {
						visited[nx][ny] = true;
						route(n, cnt + 1, nx, ny, visited, true, k);
						visited[nx][ny] = false;
					}
					roadmap[nx][ny] = tmp;
				}
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n, k;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> n >> k;
		int max_high = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> roadmap[i][j];
				max_high = (max_high > roadmap[i][j])? max_high : roadmap[i][j];
			}
		}
		res = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (roadmap[i][j] == max_high) {
					bool visited[8][8] = { false };
					visited[i][j] = true;
					route(n, 1, i, j, visited, false, k);
				}
			}
		}
		cout << "#" << test << " " << res << "\n";
	}
	return 0;
}