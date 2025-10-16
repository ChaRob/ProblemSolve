#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	map<string, char> translate;
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		char c;
		string bits;
		cin >> c >> bits;
		translate[bits] = c;
	}
	string encoded;
	cin >> encoded;
	for (int i = 0; i < encoded.length() / 4; i++)
	{
		string now = encoded.substr(i * 4, 4);
		if (translate.find(now) != translate.end())
			cout << translate[now];
		else
			cout << "?";
	}
	return 0;
}