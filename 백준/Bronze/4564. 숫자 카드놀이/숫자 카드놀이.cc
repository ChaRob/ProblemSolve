#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string S;
	while (true)
	{
		cin >> S;
		if (S == "0") break;

		while (true)
		{
			cout << S << " ";
			if (S.size() == 1)
				break;
			int res = 1;
			for (int i = 0; i < S.size(); i++)
				res *= S[i] - '0';
			S = to_string(res);
		}
		cout << "\n";
	}
	return 0;
}