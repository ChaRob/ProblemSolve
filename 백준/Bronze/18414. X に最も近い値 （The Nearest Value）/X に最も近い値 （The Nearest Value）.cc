#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int X, L, R, ans = 200000;
	cin >> X >> L >> R;
	for (int i = L; i <= R; i++)
	{
		ans = (abs(X - ans) < abs(X - i)) ? ans : i;
	}
	cout << ans;
	return 0;
}