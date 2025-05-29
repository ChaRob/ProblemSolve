#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	string s;
	cin >> s;
	int idx = 0;
	while (idx < s.size())
	{
		cout << s[idx];
		idx += k;
	}
	return 0;
}