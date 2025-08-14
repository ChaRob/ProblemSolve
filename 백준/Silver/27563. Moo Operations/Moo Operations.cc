#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		int minOper = 999;
		if (input.length() >= 3)
		{
			if (input.find("MOO") != string::npos)
			{
				minOper = (minOper < input.length() - 3) ? minOper : input.length() - 3;
			}
			if (input.find("MOM") != string::npos || input.find("OOO") != string::npos)
			{
				minOper = (minOper < input.length() - 2) ? minOper : input.length() - 2;
			}
			if (input.find("OOM") != string::npos)
			{
				minOper = (minOper < input.length() - 1) ? minOper : input.length() - 1;
			}
		}
		if (minOper == 999) cout << "-1\n";
		else cout << minOper << "\n";
	}
	return 0;
}