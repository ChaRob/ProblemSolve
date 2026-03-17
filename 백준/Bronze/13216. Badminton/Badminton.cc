#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int sa = 0, sb = 0;
	for (int game = 0; game < 3; game++)
	{
		if (sa >= 2 || sb >= 2)
			break;
		int score_a = 0, score_b = 0;
		while (true)
		{
			char c;
			cin >> c;
			if (c == 'A')
				score_a++;
			else
				score_b++;

			if (score_a == 21 || score_b == 21)
				break;
		}
		if (score_a > score_b)
			sa++;
		else
			sb++;
		cout << score_a << "-" << score_b << "\n";
	}
	if (sa > sb)
		cout << "A";
	else
		cout << "B";
	return 0;
}