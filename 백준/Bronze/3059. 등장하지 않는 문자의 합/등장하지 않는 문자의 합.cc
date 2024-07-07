#include<iostream>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string s;
		cin >> s;
		int alpha[26] = {}, sum = 0;
		for (char& c : s)
		{
			alpha[c - 'A']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (alpha[i] == 0) {
				sum += i + 'A';
			}
		}
		cout << sum << "\n";
	}
	return 0;
}