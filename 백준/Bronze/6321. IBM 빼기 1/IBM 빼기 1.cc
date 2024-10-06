#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		string input;
		cin >> input;
		cout << "String #" << t << "\n";
		for (char c : input) {
			if (c == 'Z') {
				cout << 'A';
			}
			else cout << (char)(c + 1);
		}
		cout << "\n\n";
	}
	return 0;
}