#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int s, c, a, r;
		cin >> s >> c >> a >> r;
		if (s >= 1000 || c >= 1600 || a >= 1500 ||
			(r != -1 && r <= 30))
			cnt++;
	}
	cout << cnt;
	return 0;
}