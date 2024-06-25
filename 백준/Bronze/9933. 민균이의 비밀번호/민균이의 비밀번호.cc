#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, length;
	char mid;
	cin >> n;
	string* words = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}
	for (int i = 0; i < n; i++)
	{
		string revWord = words[i];
		reverse_copy(begin(words[i]), end(words[i]), begin(revWord));
		for (int j = i; j < n; j++)
		{
			if (revWord == words[j]) {
				length = revWord.length();
				mid = revWord[length / 2];
				break;
			}
		}
	}
	cout << length << " " << mid;
	return 0;
}