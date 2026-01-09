#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long w, n, nowW = 0, cnt = 0;
	cin >> w >> n;
	vector<long long> trains(n);
	for (int i = 0; i < n; i++)
	{
		cin >> trains[i];
		nowW += trains[i];
		if (i >= 4)
			nowW -= trains[i - 4];
		if (nowW > w)
			break;
		cnt++;
	}
	cout << cnt;
	return 0;
}