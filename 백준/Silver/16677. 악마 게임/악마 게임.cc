#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string standard, ansWord;
	cin >> standard;
	int n, maxCnt = 0, maxG = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string word;
		int g, index = 0;
		cin >> word >> g;
		for (int j = 0; j < word.size(); j++) 
		{ 
			if (index < standard.size() && word[j] == standard[index])
				index++;
		}
		if (index == standard.size())
		{
			int cnt = word.size() - standard.size();
			if (maxG * cnt < g * maxCnt)
			{
				ansWord = word;
				maxG = g;
				maxCnt = cnt;
			}
		}
	}
	if (maxG == -1)
		cout << "No Jam";
	else
		cout << ansWord;
	return 0;
}