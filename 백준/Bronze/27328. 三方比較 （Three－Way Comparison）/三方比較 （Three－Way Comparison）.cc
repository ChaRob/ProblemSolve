#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		cout << "1";
	}
	else if (a < b)
	{
		cout << "-1";
	}
	else
	{
		cout << "0";
	}
	return 0;
}