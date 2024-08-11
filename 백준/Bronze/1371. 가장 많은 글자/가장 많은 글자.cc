#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int alpha[26] = {}, maxV = 0;
	string sentence;
	while (cin >> sentence) {
		for (char& c : sentence) {
			alpha[c - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		maxV = (maxV > alpha[i]) ? maxV : alpha[i];
	}
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == maxV) {
			cout << (char)(i + 'a');
		}
	}
	return 0;
}