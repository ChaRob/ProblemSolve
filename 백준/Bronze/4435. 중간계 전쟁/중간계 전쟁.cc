#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		cout << "Battle " << t << ": ";
		int G = 0, g1, g2, g3, g4, g5, g6;
		int S = 0, s1, s2, s3, s4, s5, s6, s7;
		cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
		cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7;
		G = g1 + g2 * 2 + g3 * 3 + g4 * 3 + g5 * 4 + g6 * 10;
		S = s1 + s2 * 2 + s3 * 2 + s4 * 2 + s5 * 3 + s6 * 5 + s7 * 10;
		if (G > S) cout << "Good triumphs over Evil\n";
		else if (G < S) cout << "Evil eradicates all trace of Good\n";
		else cout << "No victor on this battle field\n";
	}
	return 0;
}