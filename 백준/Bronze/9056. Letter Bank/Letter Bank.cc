#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		map<char, bool> wordMap;
		string bank;
		cin >> bank;
		for (char c : bank)
		{
			wordMap[c] = false;
		}
		string letter;
		cin >> letter;
		bool check = true;
		for (char c : letter)
		{
			if (wordMap.find(c) != wordMap.end())
			{
				wordMap[c] = true;
			}
			else
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			for (auto it = wordMap.begin(); it != wordMap.end(); it++)
			{
				if (it->second == false)
				{
					check = false;
					break;
				}
			}
		}
		if (check)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}