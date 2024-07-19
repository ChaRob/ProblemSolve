#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, r = 0, s = 0;
	int codeAlpha[26] = {}, guessAlpha[26] = {};
	cin >> n;
	string code, guess;
	cin >> code >> guess;
	for (int i = 0; i < n; i++)
	{
		if (code[i] == guess[i]) {
			r++;
		}
		else {
			codeAlpha[code[i] - 'A']++;
			guessAlpha[guess[i] - 'A']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (codeAlpha[i] >= guessAlpha[i]) {
			s += guessAlpha[i];
		}
		else {
			s += codeAlpha[i];
		}
	}

	cout << r << " " << s;
	return 0;
}