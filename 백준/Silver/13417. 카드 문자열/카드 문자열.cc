#include<iostream>
#include<deque>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int test = 0; test < T; test++)
	{
		cin >> n;
		deque<char> cards;
		char card;
		for (int i = 0; i < n; i++)
		{
			cin >> card;
			if (cards.empty()) {
				cards.push_back(card);
			}
			else if (card <= cards.front()) {
				cards.push_front(card);
			}
			else {
				cards.push_back(card);
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << cards[i];
		}
		cout << "\n";
	}
	return 0;
}