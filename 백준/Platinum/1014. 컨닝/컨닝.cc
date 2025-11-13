#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int dp[10][1024];

int Search(const vector<vector<int>>& rowMasks, int& n, int& m, int nowRow, int lastMask)
{
	if (nowRow == n) return 0;
	if (dp[nowRow][lastMask] != -1) return dp[nowRow][lastMask];

	dp[nowRow][lastMask] = 0;
	int maxCnt = 0;

	for (int i = 0; i < rowMasks[nowRow].size(); i++)
	{
		int mask = rowMasks[nowRow][i];
		bool check = true;
		if (nowRow > 0)
		{
			/*for (int col = 0; col < m; col++)
			{
				if (mask & (1 << col))
				{
					if ((col > 0 && (((lastMask & (1 << (col - 1))) > 0))) ||
						(col < m - 1 && (((lastMask & (1 << (col + 1))) > 0))))
					{
						check = false;
						break;
					}
				}
			}*/
			if ((mask & (lastMask << 1)) != 0) check = false;
			if ((mask & (lastMask >> 1)) != 0) check = false;
		}

		if (check)
		{
			int tmp = 0, cnt = 0;;
			for (int col = 0; col < m; col++)
			{
				if (mask & (1 << col)) tmp++;
			}
			cnt = Search(rowMasks, n, m, nowRow + 1, mask) + tmp;
			maxCnt = (maxCnt > cnt) ? maxCnt : cnt;
		}
	}
	return dp[nowRow][lastMask] = maxCnt;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int C;
	cin >> C;
	for (int t = 0; t < C; t++)
	{
		int n, m;
		cin >> n >> m;
		vector<string> classroom(n);
		vector<vector<int>> rowMasks(n);
		fill(&dp[0][0], &dp[0][0] + 10 * 1024, -1);
		for (int i = 0; i < n; i++)
		{
			cin >> classroom[i];
			vector<int> mask;
			for (int j = 0; j < 1 << m; j++)
			{
				bool check = true;
				for (int col = 0; col < m; col++)
				{
					if (j & (1 << col))
					{
						if ((classroom[i][col] == 'x')
						 || (col > 0 && (j & (1 << (col - 1)))))
						{
							check = false;
							break;
						}
					}
				}
				if (check) mask.push_back(j);
			}
			rowMasks[i] = mask;
		}
		cout << Search(rowMasks, n, m, 0, 0) << "\n";
	}
	return 0;
}