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
		string name, pssS, birthS;
		int courses;
		cin >> name >> pssS >> birthS >> courses;
		int pss = stoi(pssS.substr(0,4));
		int birth = stoi(birthS.substr(0,4));

		int eligible = 2;
		if (pss >= 2010) eligible = 1;
		if (birth >= 1991) eligible = 1;
		if (pss < 2010 && birth < 1991 && courses >= 41) eligible = 0;
		
		string result;
		switch (eligible)
		{
		case 0:
			result = "ineligible";
			break;
		case 1:
			result = "eligible";
			break;
		case 2:
			result = "coach petitions";
			break;
		}
		cout << name << ' ' << result << '\n';
	}
	return 0;
}