#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int alpha[26] = {}, len = 0;
	char c;
	while (cin >> c)
	{
		alpha[c - 'A']++;
		len++;
	}
	int oddCnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] % 2) oddCnt++;
	}

	if ((len % 2 == 0 && oddCnt > 0) ||
		(len % 2 == 1 && oddCnt > 1)
		) {
		cout << "I'm Sorry Hansoo";
	}
	else {
		for (int i = 0; i < 26; i++)
		{
			for (int j = 0; j < alpha[i]/2; j++)
			{
				cout << (char)(i + 'A');
			}
		}
		for (int i = 0; i < 26; i++)
		{
			if (alpha[i]%2 == 1) {
				cout << (char)(i + 'A');
				break;
			}
		}
		for (int i = 25; i >= 0; i--)
		{
			for (int j = 0; j < alpha[i]/2; j++)
			{
				cout << (char)(i + 'A');
			}
		}
	}
	return 0;
}