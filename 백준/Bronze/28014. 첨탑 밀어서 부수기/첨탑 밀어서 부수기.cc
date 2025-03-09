#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0, now, prev = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> now;
		if (now >= prev) {
			cnt++;
		}
		prev = now;
	}
	cout << cnt;
	return 0;
}