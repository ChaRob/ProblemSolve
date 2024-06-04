#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string n, tmp, ans;
	cin >> n;
	for (int i = 0; i < n.length(); i++)
	{
		tmp += n[i];
		int tmpI = stoi(tmp);
		if		(tmpI >= stoi(ans + '7')) ans += '7';
		else if (tmpI >= stoi(ans + '4')) ans += '4';
		else if (i>0)
		{
			if (ans[i - 1] == '7') {
				ans.pop_back();
				ans += '4';
			}
			else if (ans[i - 1] == '4') {
				ans.pop_back();
			}
			tmp.pop_back();
			i -= 1;
		}
	}
	cout << ans;
	return 0;
}