#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int min = 101;
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			int tmp;
			cin >> tmp;
			if ((tmp & 1) == 0) {
				min = (min < tmp) ? min : tmp;
				sum += tmp;
			}
		}
		cout << sum << " " << min << "\n";
	}
	return 0;
}