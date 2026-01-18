#include <iostream>
#include <string>
using namespace std;

string maps[5];
int dx[8] = { -2,-1,1,2,2,1,-1,-2 };
int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };

bool IsValid()
{
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (maps[i][j] == 'k')
			{
				cnt++;
				for (int d = 0; d < 8; d++)
				{
					int nx = i + dx[d];
					int ny = j + dy[d];
					if (0 <= nx && nx < 5 && 0 <= ny && ny < 5 && maps[nx][ny] == 'k')
						return false;
				}
			}
		}
	}
	if (cnt != 9)
		return false;
	return true;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (int i = 0; i < 5; i++)
	{
		cin >> maps[i];
	}
	if (IsValid())
		cout << "valid";
	else
		cout << "invalid";
	return 0;
}