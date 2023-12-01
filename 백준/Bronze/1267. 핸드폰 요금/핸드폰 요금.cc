#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, claim = 0;
	cin >> n;
	int y = 0, m = 0;
	for (int i = 0; i < n; i++)
	{
		int price;
		cin >> price;
		y += 10 * (1 + price / 30);
		m += 15 * (1 + price / 60);
	}
	if (y < m) {
		cout << "Y " << y;
	}
	else if (y > m) {
		cout << "M " << m;
	}
	else {
		cout << "Y M " << y;
	}
	return 0;
}