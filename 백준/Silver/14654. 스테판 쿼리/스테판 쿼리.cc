#include <iostream>
#include <cmath>
using namespace std;

// Rock, Paper, Scissors game
bool RPS(int _p1, int _p2)
{
	if ((_p1 == 2 && _p2 == 1) ||
		(_p1 == 1 && _p2 == 3) ||
		(_p1 == 3 && _p2 == 2))
		return true; // Player 1 wins
	return false; // Player 2 wins
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int p1_score = 0, p2_score = 0;
	int p1_maxScore = 0, p2_maxScore = 0;
	int *p1 = new int[n], *p2 = new int[n];
	for (int i = 0; i < n; i++) cin >> p1[i];
	for (int i = 0; i < n; i++) cin >> p2[i];

	for (int i = 0; i < n; i++)
	{
		if (p1[i] == p2[i])
		{
			if (p1_score == 0)
			{
				p1_score = 1;
				p2_score = 0;
			}
			else if (p2_score == 0)
			{
				p1_score = 0;
				p2_score = 1;
			}
			continue;
		}

		if (RPS(p1[i], p2[i]))
		{
			p1_score++;
			p1_maxScore = max(p1_maxScore, p1_score - p2_score);
			p2_score = 0;
		}
		else if (RPS(p2[i], p1[i]))
		{
			p2_score++;
			p2_maxScore = max(p2_maxScore, p2_score - p1_score);
			p1_score = 0;
		}
	}
	cout << max(p1_maxScore, p2_maxScore);

	delete[] p1, p2;
	return 0;
}