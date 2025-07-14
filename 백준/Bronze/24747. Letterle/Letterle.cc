#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string ans;
	cin >> ans;
	for (int i = 0; i < 7; i++)
	{
		string res, output;
		cin >> res;
		for (int j = 0; j < ans.length(); j++)
		{
			if (ans[j] == res[j]) output += 'G';
			else if (ans.find(res[j]) != string::npos) output += 'Y';
			else output += 'X';
		}
		if (output == "GGGGG") {
			cout << "WINNER";
			break;
		}
		if (i == 6) {
			cout << "LOSER";
			break;
		}
		cout << output << "\n";
	}
	return 0;
}