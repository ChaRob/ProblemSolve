#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	getline(cin, input);
	bool erase = false;
	char buffer = '\0';
	for (char c : input)
	{
		if (erase) {
			if (c == buffer) erase = false;
			continue;
		}
		else if (c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e') {
			erase = true;
			buffer = c;
		}
		cout << c;
	}
	return 0;
}