#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	string S;
	cin >> S;
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		int index = 0;
		for (char c : input)
		{
			if (index < S.size() && c == S[index])
				index++;
		}
		if (index == S.size())
			cout << "true\n";
		else
			cout << "false\n";
	}
	return 0;
}