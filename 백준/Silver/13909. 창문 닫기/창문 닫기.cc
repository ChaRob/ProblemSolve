#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++)
	{
		if (i * i <= n) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}