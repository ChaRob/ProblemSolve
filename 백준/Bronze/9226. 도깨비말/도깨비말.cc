#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	while (cin >> s) {
		if (s == "#") break;
		int i = 0;
		while (i < s.size())
		{
			if (s[0] == 'a' || s[0] == 'i' || s[0] == 'u' || s[0] == 'e' || s[0] == 'o') {
				break;
			}
			char c = s.front();
			s.erase(s.begin());
			s.push_back(c);
			i++;
		}
		s += "ay";
		cout << s << "\n";
	}
	return 0;
}