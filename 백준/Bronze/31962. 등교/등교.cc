#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, x, s, t, last = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> t;
		if (s + t <= x) {
			last = (last > s) ? last : s;
		}
	}
	if (last == 0) last = -1;
	cout << last;
	return 0;
}