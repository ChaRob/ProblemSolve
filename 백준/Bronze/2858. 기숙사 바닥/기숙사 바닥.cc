#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int r, b;
	cin >> r >> b;
	int roomFull = r + b;
	int l, w;
	for (int i = 1; i <= sqrt(roomFull); i++)
	{
		if (roomFull % i == 0) {
			l = roomFull / i;
			w = i;
			if ((l + w) * 2 - 4 == r) {
				cout << l << " " << w;
				break;
			}
		}
	}
	return 0;
}