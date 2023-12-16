#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string word, vowel = "aioue";
	cin >> word;
	int cnt = 0;
	for (int i = 0; i < word.size(); i++)
	{
		if (find(vowel.begin(), vowel.end(), word[i]) != vowel.end()) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}