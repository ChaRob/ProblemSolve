#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);
		cout << input;
		if (input[input.length() - 1] != '.') cout << '.';
		cout << "\n";
	}
	return 0;
}