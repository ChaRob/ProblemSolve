#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int g, p, t;
	cin >> g >> p >> t;
	if (g * p < t * p + g)
		cout << 1;
	else if (g * p > t * p + g)
		cout << 2;
	else
		cout << 0;
	return 0;
}