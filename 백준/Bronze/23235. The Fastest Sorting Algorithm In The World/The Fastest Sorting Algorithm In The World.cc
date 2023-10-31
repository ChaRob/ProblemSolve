#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m = 1, x;
	while (true) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
		}
		cout << "Case " << m << ": Sorting... done!\n";
		m++;
	}

	return 0;
}