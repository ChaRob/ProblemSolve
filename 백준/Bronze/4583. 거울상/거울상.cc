#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int mirror[26] = { 0,'d',0,'b',0,0,0,0,'i',0,0,0,0,0,'o','q','p',0,0,0,0,'v','w','x',0,0 };
	while (true)
	{
		string input, output;
		cin >> input;
		if (input == "#")
			break;

		for (int i = input.size() - 1; i >= 0; i--)
		{
			if (mirror[input[i] - 'a'] == 0)
			{
				output = "INVALID";
				break;
			}
			output += mirror[input[i] - 'a'];
		}
		cout << output << "\n";
	}
	return 0;
}