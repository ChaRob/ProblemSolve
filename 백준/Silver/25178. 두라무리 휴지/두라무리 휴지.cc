#include <iostream>
#include <string>
using namespace std;

const char vowel[5] = { 'a', 'i', 'u', 'e', 'o' };

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string original, modify;
	cin >> original >> modify;
	int original_alpha[26] = { 0 }, modify_alpha[26] = { 0 };
	for (int i = 0; i < n; i++)
	{
		original_alpha[original[i] - 'a']++;
		modify_alpha[modify[i] - 'a']++;
	}
	for (int i = 0; i < 5; i++)
	{
		if (original_alpha[vowel[i] - 'a'] != modify_alpha[vowel[i] - 'a'])
		{
			cout << "NO\n";
			return 0;
		}
	}
	if (original[0] != modify[0] || original[n - 1] != modify[n - 1])
	{
		cout << "NO\n";
		return 0;
	}
	string original_Nvowel = "", modify_Nvowel = "";
	for (int i = 0; i < n; i++)
	{
		if (original[i] != 'a' && original[i] != 'i' && original[i] != 'u' && original[i] != 'e' && original[i] != 'o')
			original_Nvowel += original[i];
		if (modify[i] != 'a' && modify[i] != 'i' && modify[i] != 'u' && modify[i] != 'e' && modify[i] != 'o')
			modify_Nvowel += modify[i];
	}
	if (original_Nvowel != modify_Nvowel)
	{
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	return 0;
}