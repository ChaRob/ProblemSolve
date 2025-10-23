#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double S, D, T;
	cin >> S >> D >> T;
	S = S * 5280 / 3600; // Convert miles to feet and per second
	if (D / S <= T) cout << "MADE IT";
	else cout << "FAILED TEST";
	return 0;
}