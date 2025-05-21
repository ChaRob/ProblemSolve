#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string S;
	cin >> S;
	const int length = S.length();
	int alphabet[26] = { 0 };
	for (int i = 0; i < length; i++)
	{
		if (S[i] >= 'A' && S[i] <= 'Z')
			alphabet[S[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] == 0)
		{
			cout << (char)(i + 'A');
			break;
		}
	}
	return 0;
}