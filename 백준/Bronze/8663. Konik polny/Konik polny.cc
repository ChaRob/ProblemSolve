#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, s, jump = 0, cnt = 0;
	cin >> x >> s;
	while (x > jump)
	{
		if (s == 1)
		{
			cnt += x - jump;
			break;
		}

		jump += s;
		s /= 2;
		if (s == 0) s = 1;
		cnt++;
	}
	cout << cnt;
	return 0;
}