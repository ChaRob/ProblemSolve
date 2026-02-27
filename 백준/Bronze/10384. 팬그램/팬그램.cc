#include <iostream>
#include <string>

using namespace std;

bool IsPangramCount(const int* _alpha, int n)
{
	for (int i = 0; i < 26; i++)
	{
		if (_alpha[i] < n)
			return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string line;
		int alpha[26] = {};
		getline(cin, line);
		for (char c : line)
		{
			if ('A' <= c && c <= 'Z')
				alpha[c - 'A']++;
			else if ('a' <= c && c <= 'z')
				alpha[c - 'a']++;
		}
		cout << "Case " << i + 1 << ": ";
		if (IsPangramCount(alpha, 3))
			cout << "Triple pangram!!!\n";
		else if (IsPangramCount(alpha, 2))
			cout << "Double pangram!!\n";
		else if (IsPangramCount(alpha, 1))
			cout << "Pangram!\n";
		else
			cout << "Not a pangram\n";
	}
	return 0;
}