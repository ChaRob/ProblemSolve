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
		bool check = true;
		string input, output;
		cin >> input >> output;
		for (size_t i = 0; i < input.size(); i++)
		{
			if (input[i] != output[i]) { 
				check = false;
				break;
			}
		}
		if (check && input.size() == output.size()) cout << "OK\n";
		else cout << "ERROR\n";
	}
	return 0;
}