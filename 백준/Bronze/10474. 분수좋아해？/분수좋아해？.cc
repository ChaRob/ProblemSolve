#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int u, d, l;
	while (true)
	{
		cin >> u >> d;
		if (u == 0 && d == 0) break;
		l = u / d;
		u = u % d;
		cout << l << " " << u << " / " << d << "\n";
	}
	return 0;
}