#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

ll find(int r, int c, int sx, int ex, int sy, int ey, int size) {
	int mx = (sx + ex) / 2, my = (sy + ey) / 2;
	ll tmp = 0;
	if (size == 1) {
		return 0;
	}

	if (r <= mx && c <= my) {
		tmp += find(r, c, sx, mx, sy, my, size / 2);
		return tmp;
	}
	else {
		tmp += size/2 * size/2;
	}
	if (r <= mx && c > my) {
		tmp += find(r, c, sx, mx, my + 1, ey, size / 2);
		return tmp;
	}
	else {
		tmp += size / 2 * size / 2;
	}
	if (r > mx && c <= my) {
		tmp += find(r, c, mx + 1, ex, sy, my, size / 2);
		return tmp;
	}
	else {
		tmp += size / 2 * size / 2;
	}
	if (r > mx && c > my) {
		tmp += find(r, c, mx + 1, ex, my + 1, ey, size / 2);
	}
	return tmp;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, r, c, size;
	ll res;
	cin >> n >> r >> c;
	size = pow(2, n);
	res = find(r, c, 0, size - 1, 0, size - 1, size);
	cout << res;
	return 0;
}