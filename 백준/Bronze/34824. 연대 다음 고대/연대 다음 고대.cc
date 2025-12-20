#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	bool win = false;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "yonsei")
		{
			win = true;
			break;
		}
		else if (s == "korea")
			break;
	}
	if (win)
		cout << "Yonsei Won!";
	else
		cout << "Yonsei Lost...";
	return 0;
}