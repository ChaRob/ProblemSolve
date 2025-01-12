#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, a, b, s = 1, t = 1;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		s += a;
		t += b;
		if (s < t) {
			int tmp = s;
			s = t;
			t = tmp;
		}
		else if (s == t) t--;
	}
	cout << s << " " << t;
	return 0;
}