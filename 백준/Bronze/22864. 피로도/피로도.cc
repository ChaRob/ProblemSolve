#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B, C, M, now = 0, ans = 0;
	cin >> A >> B >> C >> M;
	for (int i = 0; i < 24; i++)
	{
		if (now + A <= M) {
			now += A;
			ans += B;
		}
		else {
			now -= C;
			if (now < 0) now = 0;
		}
	}
	cout << ans;
	return 0;
}