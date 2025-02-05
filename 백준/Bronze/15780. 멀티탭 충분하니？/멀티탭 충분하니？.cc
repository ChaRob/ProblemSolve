#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, cnt = 0, tab;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> tab;
		if (tab % 2) cnt += tab / 2 + 1;
		else cnt += tab / 2;
	}
	if (n <= cnt) cout << "YES";
	else cout << "NO";
	return 0;
}