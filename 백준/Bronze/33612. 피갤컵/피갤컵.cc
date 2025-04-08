#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, year = 2024, month = 8;
	cin >> n;
	month += (n - 1) * 7;
	while (month > 12)
	{
		month -= 12;
		year++;
	}
	cout << year << " " << month;
	return 0;
}