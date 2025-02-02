#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k, n, boomTime = 210, sec;
	char ans;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sec >> ans;
		boomTime -= sec;
		if (boomTime <= 0) break;
		if (ans == 'T') k++;
		if (k > 8) k = 1;
	}
	cout << k;
	return 0;
}