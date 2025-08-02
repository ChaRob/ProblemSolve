#include <iostream>
#include <string>
using namespace std;

char cipher[26] = {
	'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	while (true)
	{
		getline(cin, s);
		if (s == "ENDOFINPUT") break;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				cout << cipher[s[i] - 'A'];
			}
			else cout << s[i];
		}
		getline(cin, s);
		cout << "\n";
	}
	return 0;
}