#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, X, N;
	cin >> T >> X >> N;
	bool check = true;
	for (int i = 0; i < N; i++)
	{
		int k, a;
		cin >> k;
		bool isAllow = false;
		for (int j = 0; j < k; j++)
		{
			cin >> a;
			if (a == X) isAllow = true;
		}
		if (!isAllow) check = false;
	}
	if (check) cout << "YES";
	else cout << "NO";
	return 0;
}