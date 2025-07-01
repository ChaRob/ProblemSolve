#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		string n;
		int x, r = 0;
		cin >> n >> x;
		for (char c : n)
		{
			r = (r * 10 + (c - '0')) % x;
		}
		cout << "Case " << t << ": " << r << "\n";
	}
	return 0;
}