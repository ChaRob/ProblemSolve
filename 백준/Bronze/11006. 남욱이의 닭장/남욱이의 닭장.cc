#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, m, tmp;
		cin >> n >> m;
		tmp = m * 2 - n;
		cout << tmp << " " << (n - tmp) / 2 << "\n";
	}
	return 0;
}