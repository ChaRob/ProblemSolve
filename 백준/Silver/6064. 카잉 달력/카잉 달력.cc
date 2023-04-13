#include<iostream>
using namespace std;

int gcd(int a, int b) {
	int tmp;
	while (b > 0) {
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int solution(int maxcalender, int m, int n, int x, int y) {
	int tmp = y;
	while (maxcalender >= tmp) {
		if ((tmp-1)%m+1 == x) {
			return tmp;
		}
		tmp += n;
	}
	return -1;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, M, N, x, y, maxcalender, ans;
	cin >> T;
	for (size_t test = 0; test < T; test++)
	{
		cin >> M >> N >> x >> y;
		maxcalender = lcm(M, N);
		ans = solution(maxcalender, M, N, x, y);
		cout << ans << "\n";
	}
	return 0;
}