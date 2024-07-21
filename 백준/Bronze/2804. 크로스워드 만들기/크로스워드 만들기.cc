#include <iostream>
#include <string>
using namespace std;

int main()
{
	int r = 99, c = 99;
	string wordA, wordB;
	cin >> wordA >> wordB;
	for (int i = 0; i < wordA.size(); i++)
	{
		for (int j = 0; j < wordB.size(); j++)
		{
			if (wordA[i] == wordB[j]) {
				r = i;
				c = j;
				break;
			}
		}
		if (r != 99)  break;
	}
	for (int i = 0; i < wordB.size(); i++)
	{
		for (int j = 0; j < wordA.size(); j++)
		{
			if (j == r) cout << wordB[i];
			else if (i == c) cout << wordA[j];
			else cout << ".";
		}
		cout << "\n";
	}
	return 0;
}