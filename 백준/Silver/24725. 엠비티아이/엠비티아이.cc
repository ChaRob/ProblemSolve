#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = { 1,1,0,-1 };
int dy[4] = { 0,-1,-1,-1 };

bool CheckMbti(const string& _word)
{
	if (_word.size() != 4)
		return false;
	if (_word[0] != 'E' && _word[0] != 'I')
		return false;
	if (_word[1] != 'S' && _word[1] != 'N')
		return false;
	if (_word[2] != 'T' && _word[2] != 'F')
		return false;
	if (_word[3] != 'J' && _word[3] != 'P')
		return false;
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, shout = 0;
	cin >> n >> m;
	vector<string> board(n);
	for (int i = 0; i < n; i++)
	{
		cin >> board[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int d = 0; d < 4; d++)
			{
				int nx = i;
				int ny = j;
				int cnt = 1;
				string word = "";
				word += board[i][j];
				
				while (cnt < 4)
				{
					nx += dx[d];
					ny += dy[d];
					if (nx >= 0 && nx < n && ny >= 0 && ny < m)
					{
						word += board[nx][ny];
					}
					else
						break;
					cnt++;
				}
				string rev = word;
				reverse(rev.begin(), rev.end());
				if (CheckMbti(word))
					shout++;
				if (CheckMbti(rev))
					shout++;
			}
		}
	}
	cout << shout;
	return 0;
}