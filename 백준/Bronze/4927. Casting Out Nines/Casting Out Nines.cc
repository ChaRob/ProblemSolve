#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k = 1;
	while (true) {
		string s;
		getline(cin, s);
		if (s == ".") break;
		int a_n = 0, b_n = 0, res_n = 0;
		int idx = 0;
		bool isPlus = false;
		for (char c : s)
		{
			if (c == '*' || c == '+' || c == '=' || c == '.')
			{
				if (c == '+') {
					isPlus = true;
				}
				else if (c == '*') {
					isPlus = false;
				}
				idx++;
				continue;
			}

			switch (idx)
			{
			case 0:
				a_n += c - '0';
				break;
			case 1:
				b_n += c - '0';
				break;
			case 2:
				res_n += c - '0';
				break;
			}
		}
		if (isPlus && (a_n + b_n) % 9 == res_n % 9) {
			cout << k++ << ". PASS\n";
		}
		else if (!isPlus && (a_n * b_n) % 9 == res_n % 9) {
			cout << k++ << ". PASS\n";
		}
		else {
			cout << k++ << ". NOT!\n";
		}
	}
	return 0;
}