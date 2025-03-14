#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (i == n - 1) {
			if (c == 'G') break;
			else cout << c << 'G';
		}
		else cout << c;
	}
	return 0;
}