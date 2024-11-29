#include <iostream>
#include <algorithm>
using namespace std;

char sky[100][100];
short int cloud[100][100];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int H, W, cnt = 0;
	cin >> H >> W;
	fill(&cloud[0][0], &cloud[0][0] + 100 * 100, -1);
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> sky[i][j];
			if (sky[i][j] == 'c') {
				cloud[i][j] = 0;
				cnt++;
			}
		}
	}
	while (cnt > 0)
	{
		int tmp = 0;
		for (int i = 0; i < H; i++)
		{
			if (sky[i][W - 1] == 'c') tmp++;
		}
		cnt -= tmp;
		for (int i = 0; i < H; i++)
		{
			for (int j = W - 1; j >= 1; j--)
			{
				sky[i][j] = sky[i][j - 1];
				if (sky[i][j] == 'c' && cloud[i][j] == -1) cloud[i][j] = cloud[i][j - 1] + 1;
			}
			sky[i][0] = '.';
		}
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << cloud[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}