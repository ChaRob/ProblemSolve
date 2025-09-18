#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int alpha[26] = { 0 };
	for (int i = 0; i < n; i++)
	{
		char c;
		if (cin >> c && c >= 'a' && c <= 'z')
			alpha[c - 'a']++;
	}
	int maxCount = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > maxCount)
			maxCount = alpha[i];
	}
	cout << maxCount;
	return 0;
}