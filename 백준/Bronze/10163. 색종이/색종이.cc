#include<iostream>
using namespace std;

int board[1001][1001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* cnt = new int[n + 1] {};
	for (int i = 1; i <= n; i++)
	{
		int x, y, w, h;
		cin >> x >> y >> w >> h;
		for (int a = x; a < x + w; a++)
		{
			for (int b = y; b < y + h; b++)
			{
				board[a][b] = i;
			}
		}
	}
	for (int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			if (board[i][j] != 0) {
				cnt[board[i][j]]++;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << cnt[i] << "\n";
	}
	delete[] cnt;
	return 0;
}