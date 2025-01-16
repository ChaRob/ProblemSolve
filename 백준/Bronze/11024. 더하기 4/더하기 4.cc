#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	string input;
	for (int t = 0; t <= T; t++)
	{
		int sum = 0;
		getline(cin, input);
		string n;
		stringstream ss(input);
		while (getline(ss, n, ' ')) sum += stoi(n);
		if (sum > 0) cout << sum << "\n";
	}
	return 0;
}