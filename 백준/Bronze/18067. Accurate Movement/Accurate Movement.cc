#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, n;
	cin >> a >> b >> n;
	int an = 0, bn = 0, cnt = 0;
	while (an != n - a || bn != n - b)
	{
		if (an < n - a)
		{
			an += b - a;
			if (an > n - a) an = n - a;
			cnt++;
		}
		if (bn < n - b)
		{
			bn += b - a;
			if (bn > n - b) bn = n - b;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}