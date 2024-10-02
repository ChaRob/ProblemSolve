#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n, low = 99, high = 0, coord;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> coord;
			low = (low < coord) ? low : coord;
			high = (high > coord) ? high : coord;
		}
		cout << (high - low) * 2 << "\n";
	}
	return 0;
}