#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c)
	{
		cout << "correct!";
	}
	else
	{
		cout << "wrong!";
	}
	return 0;
}