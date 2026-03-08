#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m = 2, k = 1;
	cin >> n;
	int oddCnt = 0, evenCnt = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a % m == 0)
			evenCnt++;
		else
			oddCnt++;
	}
	if (evenCnt > oddCnt)
		k = 0;
	cout << m << " " << k;
	return 0;
}