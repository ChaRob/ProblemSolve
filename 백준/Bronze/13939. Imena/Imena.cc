#include <iostream>
#include <string>
using namespace std;

bool IsLastWord(const string& _word)
{
	if (_word.back() == '.' ||
		_word.back() == '?' ||
		_word.back() == '!')
	{
		return true;
	}
	return false;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		string input;
		while (cin >> input)
		{
			if (input.front() >= 'A' && input.front() <= 'Z')
			{
				bool isName = true;
				for (int i = 1; i < input.size(); i++)
				{
					if ((input[i] < 'a' || input[i] > 'z') && !IsLastWord(input))
					{
						isName = false;
						break;
					}
				}
				if (isName) cnt++;
			}

			if (IsLastWord(input))
			{
				break;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}