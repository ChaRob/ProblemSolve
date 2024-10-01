#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	getline(cin, input);
	int idx = 0;
	char check[4] = { 'U','C','P','C' };
	for (char c : input)
	{
		if (c == check[idx]) {
			idx++;
		}
	}

	if (idx != 4) {
		cout << "I hate UCPC";
	}
	else {
		cout << "I love UCPC";
	}
	return 0;
}