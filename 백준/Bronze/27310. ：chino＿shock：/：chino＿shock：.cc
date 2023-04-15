#include<iostream>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string str;
	int col = 0, under = 0;
	cin >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == '_') under++;
		else if (str[i] == ':') col++;
	}
	cout << str.size() + col + under * 5;
	return 0;
}