#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	while (true)
	{
		getline(cin, input);
		if (input == "***") break;
		for (int i = input.size() - 1; i >= 0; i--)
		{
			cout << input[i];
		}
		cout << "\n";
	}
	return 0;
}