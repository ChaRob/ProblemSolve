#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		cout << "Case " << t << ": ";
		int n;
		cin >> n;
		bool check = true;
		for (int i = 0; i < n; i++)
		{
			int cnt = 0;
			char s[3];
			for (int j = 0; j < 3; j++)
			{
				cin >> s[j];
			}
			if ((s[0] == '0' && s[1] == '0') || (s[1] == '0' && s[2] == '0')) check = false;
		}
		if (check) cout << "Standing\n";
		else cout << "Fallen\n";
	}
	return 0;
}