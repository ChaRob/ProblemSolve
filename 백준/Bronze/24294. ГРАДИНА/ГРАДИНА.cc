#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int w1, h1, w2, h2, w;
	cin >> w1 >> h1 >> w2 >> h2;
	w = (w1 > w2) ? w1 : w2;
	cout << (h1 + h2 + w + 2) * 2;
	return 0;
}