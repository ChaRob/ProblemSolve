#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int walk = 0;
		string input;
		cin >> input;
		for (char c : input) {
			if (c == 'D') break;
			else walk++;
		}
		cout << walk << "\n";
	}
	return 0;
}