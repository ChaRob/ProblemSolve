#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string first, second;
	int cnt = 1;
	while (true)
	{
		int fa[26] = {}, sa[26] = {};
		bool check = true;
		cin >> first >> second;
		if (first == "END" && second == "END") break;
		for (char c : first) fa[c - 'a']++;
		for (char c : second) sa[c - 'a']++;

		for (int i = 0; i < 26; i++)
		{
			if (fa[i] != sa[i]) {
				check = false;
				break;
			}
		}
		cout << "Case " << cnt << ": ";
		if (check) cout << "same\n";
		else cout << "different\n";
		cnt++;
	}
	return 0;
}