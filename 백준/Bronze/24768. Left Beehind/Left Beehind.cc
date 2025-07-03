#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	while (true)
	{
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		if (n + m == 13)
		{
			cout << "Never speak again." << endl;
		}
		else if (n < m)
		{
			cout << "Left beehind." << endl;
		}
		else if (n == m)
		{
			cout << "Undecided." << endl;
		}
		else
		{
			cout << "To the convention." << endl;
		}
	}
	return 0;
}