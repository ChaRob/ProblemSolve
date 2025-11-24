#include <iostream>
#include <string>
using namespace std;

int cnt[26][200000];

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	cnt[s[0] - 'a'][0] = 1;
	for (int i = 1; i < s.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] - 'a' == j)
				cnt[j][i] = cnt[j][i - 1] + 1;
			else
				cnt[j][i] = cnt[j][i - 1];
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		char c; int a, b;
		cin >> c >> a >> b;
		int ans = cnt[c - 'a'][b] - ((a > 0)? cnt[c - 'a'][a - 1] : 0);
		cout << ans << "\n";
	}
	return 0;
}