#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int K;
	cin >> K;
	for (int k = 1; k <= K; k++)
	{
		int n, s, day, sum = 0;
		cin >> n >> s >> day;
		for (int i = 0; i < n; i++)
		{
			int d, v;
			cin >> d >> v;
			if (d <= day * s) sum += v;
		}
		cout << "Data Set " << k << ":\n";
		cout << sum << "\n\n";
	}
	return 0;
}