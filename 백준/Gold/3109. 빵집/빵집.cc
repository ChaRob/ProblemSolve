#include<iostream>
#include<string>
using namespace std;

string roadmap[10000];
int direct[3] = { -1,0,1 };

bool dfs(int R, int C, int row, int col) {
	if (col == C - 1) {
		roadmap[row][col] = 'x';
		return true;
	}

	for (size_t i = 0; i < 3; i++)
	{
		int row_n = row + direct[i];
		if (0 <= row_n && row_n < R && roadmap[row_n][col + 1] == '.') {
			roadmap[row_n][col + 1] = 'x';
			if (dfs(R, C, row_n, col + 1)) {
				return true;
			}
		}
	}
	return false;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int R, C, cnt = 0;
	cin >> R >> C;
	for (size_t i = 0; i < R; i++)
	{
		cin >> roadmap[i];
	}
	for (size_t i = 0; i < R; i++)
	{
		if (dfs(R, C, i, 0)) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}