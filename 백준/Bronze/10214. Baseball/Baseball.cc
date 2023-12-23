#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int Y = 0, K = 0, a, b;
		for (int i = 0; i < 9; i++)
		{
			cin >> a >> b;
			Y += a;
			K += b;
		}
		if (Y > K) {
			cout << "Yonsei\n";
		}
		else if (Y < K) {
			cout << "Korea\n";
		}
		else {
			cout << "Draw\n";
		}
	}
	return 0;
}