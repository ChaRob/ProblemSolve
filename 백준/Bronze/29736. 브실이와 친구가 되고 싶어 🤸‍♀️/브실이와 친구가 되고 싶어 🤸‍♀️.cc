#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, k, x, cnt = 0;
	cin >> a >> b >> k >> x;
	for (int i = a; i <= b; i++)
	{
		if (k - x <= i && i <= k + x) {
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "IMPOSSIBLE";
	}
	else {
		cout << cnt;
	}
	return 0;
}