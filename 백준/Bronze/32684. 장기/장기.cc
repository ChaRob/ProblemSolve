#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float a, b, c, d, e, f, score1, score2;
	cin >> a >> b >> c >> d >> e >> f;
	score1 = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2;
	cin >> a >> b >> c >> d >> e >> f;
	score2 = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2 + 1.5;
	if (score1 > score2) {
		cout << "cocjr0208" << endl;
	}
	else {
		cout << "ekwoo" << endl;
	}
	return 0;
}