#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	if (k % 2 == 0) cout << 0;
	else cout << 8;
	return 0;
}