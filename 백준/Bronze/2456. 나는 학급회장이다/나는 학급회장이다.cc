#include <iostream>
using namespace std;

int score[3][4];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int f, s, t;
		cin >> f >> s >> t;
		score[0][f - 1]++;
		score[1][s - 1]++;
		score[2][t - 1]++;
	}
	int idx = -1, max = 0;
	bool check = false;
	for (int i = 0; i < 3; i++)
	{
		score[i][3] = score[i][0] * 1 + score[i][1] * 2 + score[i][2] * 3;
		if (max < score[i][3]) {
			max = score[i][3];
			idx = i;
			check = true;
		}
		else if (max == score[i][3]) {
			if (score[idx][0] < score[i][0]) {
				idx = i;
				check = true;
			}
			else if (score[idx][0] == score[i][0] && score[idx][1] < score[i][1]) {
				idx = i;
				check = true;
			}
			else if (score[idx][0] == score[i][0] && score[idx][1] == score[i][1]) {
				check = false;
			}
		}
	}
	if (check == false) idx = -1;
	cout << idx + 1 << " " << max;
	return 0;
}