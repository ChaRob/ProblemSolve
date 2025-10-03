#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;
vector<vector<int>> numScores;

void GetScore(int _score, int _startPos, int _lastPos)
{
	for (int i = 0; i < numScores.size(); i++)
	{
		if (_startPos < numScores[i][0] && numScores[i][0] < _lastPos)
		{
			numScores[i][1] += _score;
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> s;
	vector<int> sb_pos, mb_pos, lb_pos;
	int smallBracket, middleBracket, largeBracket;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			sb_pos.push_back(i);
			continue;
		}
		else if (s[i] == '{')
		{
			mb_pos.push_back(i);
			continue;
		}
		else if (s[i] == '[')
		{
			lb_pos.push_back(i);
			continue;
		}
		else if (s[i] == ')')
		{
			smallBracket = sb_pos.back();
			sb_pos.pop_back();
			GetScore(1, smallBracket, i);
			continue;
		}
		else if (s[i] == '}')
		{
			middleBracket = mb_pos.back();
			mb_pos.pop_back();
			GetScore(2, middleBracket, i);
			continue;
		}
		else if (s[i] == ']')
		{
			largeBracket = lb_pos.back();
			lb_pos.pop_back();
			GetScore(3, largeBracket, i);
			continue;
		}
		else
		{
			vector<int> newNumber = { i,0 };
			numScores.push_back(newNumber);
		}
	}
	int maxScore = 0;
	for (int i = 0; i < numScores.size(); i++)
	{
		if (numScores[i][1] > maxScore) maxScore = numScores[i][1];
	}
	cout << maxScore;
	return 0;
}