#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	int n = 0, y = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			n++;
		}
		else if (s[i] == 'y')
		{
			y++;
		}
	}
	cout << n << " " << n + y;
	return 0;
}