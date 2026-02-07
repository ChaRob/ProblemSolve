#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string curier;
		int year;
		cin >> curier >> year;
		if (year == 2026)
		{
			cout << curier;
			break;
		}
	}
	return 0;
}