#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int s, n;
		cin >> s >> n;
		for (int i = 0; i < n; i++)
		{
			int q, p;
			cin >> q >> p;
			s += q * p;
		}
		cout << s << "\n";
	}
	return 0;
}