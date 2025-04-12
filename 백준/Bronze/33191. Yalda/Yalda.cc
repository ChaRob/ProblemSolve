#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int b, w, p, n;
	cin >> b >> w >> p >> n;

	if (w <= b) cout << "Watermelon";
	else if (p <= b) cout << "Pomegranates";
	else if (n <= b) cout << "Nuts";
	else cout << "Nothing";
	return 0;
}