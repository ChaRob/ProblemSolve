#include<iostream>
using namespace std;

int S[20][20];
int minabiliy = 10000;

int min(int a, int b) {
	return (a < b) ? a : b;
}

void maketeam(bool *team, int k, int n, int j) {
	if (k == n / 2) {
		int team1_ab = 0, team2_ab = 0;
		for (size_t i = 0; i < n - 1; i++)
		{
			for (size_t j = i + 1; j < n; j++)
			{
				if (team[i] && team[j])
				{
					team1_ab += S[i][j] + S[j][i];
				}
				else if (!team[i] && !team[j]) {
					team2_ab += S[i][j] + S[j][i];
				}
			}
		}
		minabiliy = min(minabiliy, abs(team1_ab - team2_ab));
	}
	else {
		for (size_t i = j; i < n; i++)
		{
			team[i] = true;
			maketeam(team, k + 1, n, i + 1);
			team[i] = false;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> S[i][j];
		}
	}
	bool team[20] = { false };
	maketeam(team, 0, n, 0);
	cout << minabiliy;
	return 0;
}