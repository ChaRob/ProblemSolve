#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string ReverseSubstr(const string& _str, int _pos, int _len)
{
	string result = _str.substr(_pos, _len);
	reverse(result.begin(), result.end());
	return result;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string word, ans;
	cin >> word;
	for (int j = 1; j < word.size() - 1; j++)
	{
		for (int k = j + 1; k < word.size(); k++)
		{
			string tmp = ReverseSubstr(word, 0, j) + ReverseSubstr(word, j, k - j) + ReverseSubstr(word, k, 99);
			if (ans == "" || tmp < ans)
				ans = tmp;
		}
	}
	cout << ans;
	return 0;
}