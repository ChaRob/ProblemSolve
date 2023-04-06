#include<iostream>
#include<queue>
using namespace std;

char forest[51][51];
unsigned short target_x, target_y, now_x, now_y;
int direct[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };

void water(int R, int C) {
	queue<pair<int, int>> que;
	for (size_t i = 0; i < R; i++)
	{
		for (size_t j = 0; j < C; j++)
		{
			if (forest[i][j] == '*') {
				que.push(make_pair(i, j));
			}
		}
	}
	while (!que.empty()) {
		int x = que.front().first, y = que.front().second;
		que.pop();
		for (size_t i = 0; i < 4; i++)
		{
			int nx = x + direct[i][0], ny = y + direct[i][1];
			if (0 <= nx && nx < R && 0 <= ny && ny < C) {
				if (forest[nx][ny] != 'D' && forest[nx][ny] != 'X') {
					forest[nx][ny] = '*';
				}
			}
		}
	}
}

queue<pair<int, int>> bfs(queue<pair<int, int>> intput_que, int R, int C, int **time) {
	queue<pair<int, int>> que;
	while (!intput_que.empty()) {
		int x = intput_que.front().first, y = intput_que.front().second;
		intput_que.pop();

		for (size_t i = 0; i < 4; i++)
		{
			int nx = x + direct[i][0], ny = y + direct[i][1];
			if (0 <= nx && nx < R && 0 <= ny && ny < C) {
				if ((forest[nx][ny] == '.' || forest[nx][ny] == 'D') && time[nx][ny] == -1) {
					que.push(make_pair(nx, ny));
					time[nx][ny] = time[x][y] + 1;
				}
			}
		}
	}
	return que;
}

int move(int R, int C) {
	queue<pair<int, int>> que;
	int **time = new int*[R], res;
	for (size_t i = 0; i < R; i++)
	{
		time[i] = new int[C];
	}
	for (size_t i = 0; i < R; i++)
	{
		for (size_t j = 0; j < C; j++)
		{
			time[i][j] = -1;
		}
	}
	time[now_x][now_y] = 0;
	que.push(make_pair(now_x, now_y));

	while (!que.empty()) {
		water(R, C);
		que = bfs(que, R, C, time);
	}
	res = time[target_x][target_y];
	for (size_t i = 0; i < R; i++)
	{
		delete[] time[i];
	}
	delete[] time;
	return res;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int R, C, time;
	cin >> R >> C;
	for (size_t i = 0; i < R; i++)
	{
		for (size_t j = 0; j < C; j++)
		{
			cin >> forest[i][j];
			if (forest[i][j]=='D') {
				target_x = i;
				target_y = j;
			}
			if (forest[i][j] == 'S') {
				now_x = i;
				now_y = j;
			}
		}
	}
	time = move(R, C);
	if (time == -1) {
		cout << "KAKTUS";
	}
	else {
		cout << time;
	}
	return 0;
}