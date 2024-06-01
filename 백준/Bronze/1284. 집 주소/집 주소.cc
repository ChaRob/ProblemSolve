#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	while (true) {
		cin >> s;
		if (s == "0") break;

		int length = 2;
		for (char c : s)
		{
			if (c == '1') length += 2;
			else if (c == '0') length += 4;
			else length += 3;
		}
		length += s.length() - 1;
		cout << length << "\n";
	}
	return 0;
}