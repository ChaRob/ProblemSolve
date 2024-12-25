#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, p1 = 0, p2 = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			char d1, d2;
			cin >> d1 >> d2;
			if (d1 == 'R') {
				if (d2 == 'P') p2++;
				else if (d2 == 'S') p1++;
			}
			else if (d1 == 'P') {
				if (d2 == 'R') p1++;
				else if (d2 == 'S') p2++;
			}
			else if (d1 == 'S') {
				if (d2 == 'R') p2++;
				else if (d2 == 'P') p1++;
			}
		}
		if (p1 > p2) cout << "Player 1\n";
		else if (p1 < p2) cout << "Player 2\n";
		else cout << "TIE\n";
	}
	return 0;
}