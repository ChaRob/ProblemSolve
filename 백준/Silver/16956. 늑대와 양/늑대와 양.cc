#include <iostream>
#include <vector>
#include <string>
using namespace std;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

bool Solve(vector<string>& _farm, const int& _r, const int& _c)
{
	for (int i = 0; i < _r; i++)
	{
		for (int j = 0; j < _c; j++)
		{
			if (_farm[i][j] == 'S')
			{
				for (int d = 0; d < 4; d++)
				{
					int nx = i + dx[d];
					int ny = j + dy[d];

					if (nx >= 0 && nx < _r && ny >= 0 && ny < _c)
					{
						if (_farm[nx][ny] == 'W')
							return false;
						if (_farm[nx][ny] == '.')
							_farm[nx][ny] = 'D';
					}
				}
			}
		}
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int r, c;
	cin >> r >> c;
	vector<string> farm(r);
	for (int i = 0; i < r; i++)
	{
		string line;
		cin >> line;
		farm[i] = line;
	}
	if (Solve(farm, r, c))
	{
		cout << "1\n";
		for (int i = 0; i < r; i++)
		{
			cout << farm[i] << "\n";
		}
	}
	else
		cout << 0;
	return 0;
}