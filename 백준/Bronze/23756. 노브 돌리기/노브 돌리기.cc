#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, A, cnt = 0;
	cin >> n >> A;
	for (int i = 0; i < n; i++)
	{
		int na, left, right;
		cin >> na;
		left = abs(A - na);
		right = 360 - left;
		if (left < right)
			cnt += left;
		else
			cnt += right;
		A = na;
	}
	cout << cnt;
	return 0;
}