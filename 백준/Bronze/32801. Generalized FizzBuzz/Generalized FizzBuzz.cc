#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, a, b;
	cin >> n >> a >> b;
	int cnt_f = 0, cnt_b = 0, cnt_fb = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % a == 0 && i % b == 0)
			cnt_fb++;
		else if (i % a == 0)
			cnt_f++;
		else if (i % b == 0)
			cnt_b++;
	}
	cout << cnt_f << " " << cnt_b << " " << cnt_fb;
	return 0;
}