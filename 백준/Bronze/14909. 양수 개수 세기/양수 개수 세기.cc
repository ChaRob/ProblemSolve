#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	while (cin >> n)
	{
		if (n > 0) cnt++;
	}
	cout << cnt;
	return 0;
}