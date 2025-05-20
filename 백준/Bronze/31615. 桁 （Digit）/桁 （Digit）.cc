#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a + b < 10) cout << 1;
	else if (a + b < 100) cout << 2;
	else if (a + b < 1000) cout << 3;
	return 0;
}