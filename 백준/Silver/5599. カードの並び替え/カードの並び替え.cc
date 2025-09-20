#include <iostream>
#include <vector>
using namespace std;

vector<int> RipleShuffle(vector<int> cards) {
	int n = cards.size() / 2;
	vector<int> shuffled(2 * n);
	for (int i = 0; i < n; i++) {
		shuffled[2 * i] = cards[i];
		shuffled[2 * i + 1] = cards[i + n];
	}
	return shuffled;
}

vector<int> CutShuffle(vector<int> cards, int k)
{
	int n = cards.size();
	vector<int> shuffled;
	for (int i = k; i < n; i++)
	{
		shuffled.push_back(cards[i]);
	}
	for (int i = 0; i < k; i++)
	{
		shuffled.push_back(cards[i]);
	}
	return shuffled;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> cards;
	for (int i = 1; i <= 2*n; i++)
	{
		cards.push_back(i);
	}
	for (int i = 0; i < m; i++)
	{
		int k;
		cin >> k;
		if (k == 0) cards = RipleShuffle(cards);
		else cards = CutShuffle(cards, k);
	}
	for (int card : cards) {
		cout << card << "\n";
	}
	return 0;
}