#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string caesar, word;
	cin >> caesar;
	for (char c : caesar)
	{
		char newC;
		if (c <= 'C') {
			newC = c + 23;
		}
		else {
			newC = c - 3;
		}
		word += newC;
	}
	cout << word;
	return 0;
}