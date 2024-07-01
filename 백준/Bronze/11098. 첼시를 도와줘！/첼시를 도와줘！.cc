#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, p;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		int maxP = 0;
		char maxName[25];
		for (int j = 0; j < p; j++)
		{
			int pee; char name[25];
			cin >> pee >> name;
			if (maxP < pee) {
				maxP = pee;
				strcpy(maxName, name);
			}
		}
		cout << maxName << "\n";
	}
	return 0;
}