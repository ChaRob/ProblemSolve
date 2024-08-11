#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, str;
		cin >> a >> str;
		int ac[26] = {}, strc[26] = {};
		for (auto& c : a)
		{
			ac[c - 'a']++;
		}
		for (auto& c : str)
		{
			strc[c - 'a']++;
		}
		bool check = true;
		for (int j = 0; j < 26; j++)
		{
			if (ac[j] != strc[j]) {
				check = false;
				break;
			}
		}
		if (check) cout << "Possible\n";
		else cout << "Impossible\n";
	}
	return 0;
}