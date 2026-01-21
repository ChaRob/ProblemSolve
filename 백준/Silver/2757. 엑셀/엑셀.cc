#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string GetColumnName(int c)
{
	string name;
	while (c > 0)
	{
		c -= 1;
		int rem = c % 26;
		name.push_back(static_cast<char>('A' + rem));
		c /= 26;
	}

	reverse(name.begin(), name.end());
	return name;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string line;
	while (cin >> line)
	{
		int cPos = line.find('C');
		int r = stoi(line.substr(1, cPos - 1));
		int c = stoi(line.substr(cPos + 1));
		if (r == 0 && c == 0)
			break;

		cout << GetColumnName(c) << r << "\n";
	}
	return 0;
}