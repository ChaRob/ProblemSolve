#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long a, b;
	cin >> a >> b;
	if (a < b && b != 0) cout << a + 1;
	else if (a >= b) cout << b;
	return 0;
}