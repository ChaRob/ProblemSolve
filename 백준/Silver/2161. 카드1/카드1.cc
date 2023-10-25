#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	queue<int> cards;
	bool sq = false;
	for (int i = 0; i < n; i++)
	{
		cards.push(i + 1);
	}
	while (!cards.empty()) {
		if (!sq) {
			cout << cards.front() << " ";
			cards.pop();
			sq = true;
		}
		else {
			cards.push(cards.front());
			cards.pop();
			sq = false;
		}
	}

	return 0;
}