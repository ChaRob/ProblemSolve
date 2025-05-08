#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int P, C, score = 0;
	cin >> P >> C;
	score = P * 50 - C * 10;
	if (P > C) score += 500;
	cout << score;
	return 0;
}