#include <iostream>
#include <string>
#include <vector>
using namespace std;

string blocks[4];

bool IsContain(const string& _str, const char& _c)
{
	for (char c : _str)
	{
		if (c == _c)
			return true;
	}
	return false;
}

bool CreateWord(const string& _word, int index, vector<bool>& _used)
{
	if (index == _word.size())
		return true;

	for (int i = 0; i < 4; i++)
	{
		if (!_used[i] && IsContain(blocks[i], _word[index]))
		{
			_used[i] = true;
			bool check = CreateWord(_word, index + 1, _used);
			if (check == true)
				return check;
			_used[i] = false;
		}
	}
	return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < 4; i++)
	{
		cin >> blocks[i];
	}
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		vector<bool> used(4, false);
		if (CreateWord(input, 0, used))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}