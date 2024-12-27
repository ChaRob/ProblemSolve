#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A = 0, B = 0, score;
	char side;
	while (true)
	{
		cin >> side >> score;
		if (side == 'A') A += score;
		else B += score;
		if (cin.eof()) break;
	}
	if (A >= 11 && A >= B + 2) {
		cout << "A";
	}
	else if (B >= 11 && B >= A + 2) {
		cout << "B";
	}
	return 0;
}