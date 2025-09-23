#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };

bool isVowel(char c)
{
	for (char v : vowels)
		if (c == v)
			return true;
	return false;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string words[5];
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
		if (words[i].length() >= 3)
			for (int j = 0; j < words[i].length() - 2; j++)
			{
				if (isVowel(words[i][j]) && !isVowel(words[i][j + 1]) && !isVowel(words[i][j + 2]))
				{
					words[i].erase(j, 1);
					j--;
				}
			}
		reverse(words[i].begin(), words[i].end());
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << words[i] << " ";
	}
	return 0;
}