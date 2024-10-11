#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int n, max = -1000000, min = 1000000, tmp;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;
			max = (max > tmp) ? max : tmp;
			min = (min < tmp) ? min : tmp;
		}
		cout << min << " " << max << "\n";
	}
	return 0;
}