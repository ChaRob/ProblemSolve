#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, cnt = 0;
	cin >> n >> m;
	while (n > 0)
	{
		cnt += n;
		n /= m;
	}
	cout << cnt;
	return 0;
}