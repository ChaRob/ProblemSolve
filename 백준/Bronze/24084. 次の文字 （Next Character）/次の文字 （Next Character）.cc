#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n-1; i++)
	{
		if (s[i + 1] == 'J') cout << s[i] << "\n";
	}
	return 0;
}