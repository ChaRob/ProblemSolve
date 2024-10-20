#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, T, time, cnt = 0;
	cin >> n >> T;
	for (int i = 0; i < n; i++)
	{
		cin >> time;
		if (T - time >= 0) {
			cnt++;
			T -= time;
		}
		else {
			break;
		}
	}
	cout << cnt;
	return 0;
}