#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	string input;
	for (int t = 0; t < T; t++)
	{
		string ans;
		cin >> input;
		int end = input.size();
		for (int i = 0; i < input.size()/2; i++)
		{
			if (input[i] == input[end - i - 1]) ans = "Do-it\n";
			else ans = "Do-it-Not\n";
		}
		cout << ans;
	}
	return 0;
}