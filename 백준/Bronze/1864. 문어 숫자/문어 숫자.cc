#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

map<char, int> taco = { {'-', 0}, {'\\', 1},{'(',2},{'@',3},{'?',4},{'>',5},{'&',6},{'%',7},{'/',-1} };

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	while (cin >> input)
	{
		if (input == "#")
			break;
		int ans = 0;
		for (int i = input.size() - 1; i >= 0; i--)
		{
			ans += pow(8, i) * taco[input[input.size() - 1 - i]];
		}
		cout << ans << "\n";
	}
	return 0;
}