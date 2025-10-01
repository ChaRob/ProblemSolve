#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int l, w, h, v;
	while (true)
	{
		cin >> l >> w >> h >> v;
		if (l == 0 && w == 0 && h == 0 && v == 0) break;
		else if (l == 0) l = v / (w * h);
		else if (w == 0) w = v / (l * h);
		else if (h == 0) h = v / (l * w);
		else if (v == 0) v = l * w * h;
		cout << l << " " << w << " " << h << " " << v << "\n";
	}
	return 0;
}