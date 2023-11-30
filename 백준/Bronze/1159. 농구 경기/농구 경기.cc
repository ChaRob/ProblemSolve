#include<iostream>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int alpha[26] = {};
	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;
		alpha[name[0] - 'a']++;
	}
	bool selected = false;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] >= 5) {
			cout << char(i + 97);
			selected = true;
		}
	}
	if (!selected) cout << "PREDAJA";
	return 0;
}