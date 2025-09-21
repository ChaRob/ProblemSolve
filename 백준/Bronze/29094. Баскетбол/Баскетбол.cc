#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n;
	map<string, int> players;
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		players[name] = 0;
	}
	cin >> m;
	int lastScoreA = 0, lastScoreB = 0;
	for (int i = 0; i < m; i++)
	{
		string scoreBoard, player;
		// Example input: "3:0 player"
		cin >> scoreBoard >> player;
		int colonPos = scoreBoard.find(':');
		int scoreA = stoi(scoreBoard.substr(0, colonPos));
		int scoreB = stoi(scoreBoard.substr(colonPos + 1));
		players[player] += (scoreA - lastScoreA) + (scoreB - lastScoreB);
		lastScoreA = scoreA;
		lastScoreB = scoreB;
	}
	int mostScore = -1;
	string mostPlayer;
	for (const auto& player : players)
	{
		if (player.second > mostScore)
		{
			mostScore = player.second;
			mostPlayer = player.first;
		}
	}
	cout << mostPlayer << " " << mostScore;
	return 0;
}