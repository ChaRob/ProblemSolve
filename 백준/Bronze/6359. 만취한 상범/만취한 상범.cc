#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, k = 1;
		cin >> n;
		while (true) {
			if ((k+1) * (k+1) > n) {
				break;
			}
			k++;
		}
		cout << k << '\n';
	}
	return 0;
}