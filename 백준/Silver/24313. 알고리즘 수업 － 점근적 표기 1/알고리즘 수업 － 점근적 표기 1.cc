#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a1, a2, c, n;
	cin >> a1 >> a2 >> c >> n;
	bool check = true;
	for (int i = n; i <= 100; i++)
	{
		if (a1 * i + a2 > c * i) {
			check = false;
			break;
		}
	}

	if (check) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}