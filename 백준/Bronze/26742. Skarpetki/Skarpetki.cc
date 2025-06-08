#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	int b = 0, c = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'B')
		{
			b++;
		}
		else if (s[i] == 'C')
		{
			c++;
		}
	}
	cout << b / 2 + c / 2;
	return 0;
}